#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n,min,max;
        scanf("%lld",&n);
        long long rem4,rem6;
        rem4 = n % 4;
        rem6 = n % 6;
        if(n<4 || n % 2 != 0){
            min = -1;
        }else if(rem4 == 0 && rem6 == 0){
            min = n / 6;
            max = n / 4;
        }else if(rem4 != 0 && rem6 != 0){
            max = (n - 6) / 4 + 1;
            min = (n-8) / 6 + 2;
        }else if(rem4 == 2){
            max = ((n - 6) / 4) + 1;
            min = n / 6;
        }else if(rem6 == 2){
            min = (n - 8) / 6 + 2;
            max = n / 4;
        }else if(rem6 == 4){
            max = n / 4;
            min = ((n - 4) / 6) + 1;
        }
        if(min == - 1){
            printf("%lld\n",min);
        }else{
            printf("%lld %lld\n",min,max);
        }
        
    }
}