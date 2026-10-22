#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        for(int i = n; i>=0; i--){
            if(i >= 2){
                printf("2^%d + ",i);
            }else if(i==1){
                printf("2 + ");
            }else{
                printf("1\n");
            }
        }
    }
}