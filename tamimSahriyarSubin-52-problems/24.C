#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d",&n);
        int ara[n];
        for(int i = 0; i<n; i++){
            scanf("%d", &ara[i]);
        }
        for(int i = 0; i<n; i+=2){
            if( i % 2 == 0 && i != 0){
                printf(" ");
            }
            printf("%d",ara[i]);
        }
        printf("\n"); 
    }
}