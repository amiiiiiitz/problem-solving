#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n,k,x;
        scanf("%lld %lld %lld",&n,&k,&x);
        long long int min_sum = (k*(k+1)) / 2;
        long long int max_sum  = (n*(n+1))/2 - ((n-k) * (n-k+1)) / 2;
        if(x>=min_sum && x<= max_sum){
            printf("YES\n");
        }else{
            printf("NO\n");
        }   
    }
    return 0;
}