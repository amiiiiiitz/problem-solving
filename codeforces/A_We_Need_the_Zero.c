#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int i,n,bit = 0;
        scanf("%d",&n);
        int a[n];
        for(i = 0; i<n; i++){
            scanf("%d",&a[i]);
            bit = bit ^ a[i];
        }
        if(n % 2 != 0 || bit == 0){
            printf("%d\n",bit);
        }else{
            printf("%d\n",-1); 
        }
    }
    return 0;
}
