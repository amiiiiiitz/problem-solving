#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,count = 0;
        scanf("%d",&n);
        int a[n];
        int b[n];
        for(i = 0; i<n; i++){
            scanf("%d",&a[i]);
            if(a[i] == 2){
                count++;
            }
        }
        if(count == 0){
            printf("%d\n",1);
        }else if(count % 2 != 0){
            printf("%d\n",-1);
        }else{
            int a_count = count;
            for(i = 0; i<n-1;i++){
                if(a[i]==2){
                    count--;
                    if(count == (a_count / 2)){
                        printf("%d\n",i+1);
                        break;
                    }
                }    
            }
        }
    }
    return 0;
} 