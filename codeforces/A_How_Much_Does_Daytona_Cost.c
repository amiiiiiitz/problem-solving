#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k,i,j=0;
        scanf("%d %d",&n,&k);
        int a[n];
        for(i = 0; i<n; i++){
            scanf("%d",&a[i]);
        }
       
        for(i = 0; i<n; i++){
           if(a[i] == k){
                j=1;
                break;
           }
        }
        if(j==1){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}