#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,j,sum = -1,op = 0;
        scanf("%d",&n);
        int a[n];
        for(i = 0; i<n; i++){
            scanf("%d",&a[i]);
            if(i>op && a[i] != a[i-1]){
                sum = 0;
                op = n;
            }
        }
        if(sum == 0){
            for(i = 0; i<n; i++){
                for(j = 0; j<n-i-1; j++){
                    if(a[j]<a[j+1]){
                        int temp = a[j];
                        a[j] = a[j+1];
                        a[j+1] = temp;
                    }
                }
            }
            if(a[0] == a[1]){
                int temp = a[0];
                a[0] = a[n-1];
                a[n-1] = temp; 
            }
            printf("YES\n");
            for(i = 0; i<n; i++){ 
                printf("%d ",a[i]);
            }
            printf("\n");  
        }else{
            printf("NO\n");  
        }
        
    }
    
    return 0;
} 