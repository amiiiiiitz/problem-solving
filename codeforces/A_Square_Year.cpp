#include<stdio.h>
#include<math.h>
int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        double s = sqrt(n);
        
        int m = sqrt(n);
        
        if(m-s == 0){
            printf("%d %d\n",0,m);
        }else{
            printf("%d\n",-1);
        }
    }
    return 0;
}