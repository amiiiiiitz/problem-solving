#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,j,count=0,k;
        k = 0;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++){
            if(a[i] != 0){
                count = 0;
            }else{
                count++;
            }
            if(k<count){
                k = count;
            }
        }
        printf("%d\n",k);
    }
    return 0;
}