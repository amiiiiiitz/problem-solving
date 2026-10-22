#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,sum = 0;
        scanf("%d",&n);
        int a[n-1];
        for(i = 0; i<n-1; i++){
            scanf("%d",&a[i]);
            sum += a[i];
        }
        
        if(sum>0){
            printf("%d\n",sum * (-1));
        }else{
            printf("%d\n",sum * (-1));
        }
        
    }
    return 0;
}
