#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,j=1,k=0,l=0;
        scanf("%d",&n);
        int a[n],b[n],c[n];
        for(i = 0; i < n; i++){
            scanf("%d",&a[i]);
        }

        int min = a[0];
        
        for(i = 0; i < n; i++){
            if(i>0 && a[i]==a[0]){
                j++;
            }else if(a[i]< min){
                min = a[i];
            }
        }
        
        if(j==n){
            printf("%d\n",-1);
        }else{
            for(i = 0; i < n; i++){
                if(a[i] == min){
                    b[l] = a[i];
                    l++;
                }else{
                    c[k]=a[i];
                    k++;
                }
            }
            printf("%d %d\n",l,k);
            for(i = 0; i < l; i++){
                printf("%d ",b[i]);
            }
            printf("\n");
            for(i = 0; i < k; i++){
                printf("%d ",c[i]);
            }
            printf("\n");
       }
        
    }
    return 0;
}