#include<stdio.h>
int main(){
    int t,i,j;
    scanf("%d",&t);
    long long int p[51][51];
    p[0][0]=1;
    p[0][1]=0;
    p[1][0]=1;
    p[1][1]=1;
    for(i = 2; i<=50; i++){
        p[i][0]=1;
        for(j = 0; j<i-1; j++){
            p[i][j+1]=p[i-1][j]+p[i-1][j+1];
        }
        p[i][j+1]=1;
    }
    while(t--){
        int n;
        scanf("%d",&n);
       
        for(i = 0; i<=n; i++){
            for(j = 0; j<=i; j++){
                if(j<i){
                    printf("%lld ",p[i][j]);
                }else{
                    printf("%lld",p[i][j]);
                }     
            }
            printf("\n");
        }
        printf("\n");
    }
}