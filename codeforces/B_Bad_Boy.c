#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,i,j;
        scanf("%d %d %d %d",&n,&m,&i,&j);
        if((j-1) > (n-j)){
            printf("%d %d %d %d\n",1,1,n,m);
        }else{
            printf("%d %d %d %d\n",n,1,1,m);
        }
    }
    return 0;
}