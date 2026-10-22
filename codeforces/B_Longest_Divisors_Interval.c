#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,i=1;
        scanf("%lld",&n);
        while(n%i==0){
            i++;
        }
        printf("%lld\n",i-1);
    }
    return 0;
}