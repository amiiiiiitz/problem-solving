#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d %d",&n,&m);
        for(int i = 0; i < n;i++){
            for(int j = 0; j<= i; j++){
                printf("%d ",m);
            }
            printf("\n");
        }
        for(int i = 0; i < n - 1;i++){
            for(int j = 0; j< (n-1) - i; j++){
                printf("%d ",m);
            }
            printf("\n");
        }
        printf("\n");
    }
}