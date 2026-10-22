#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int a,b,c;
        scanf("%lld %lld %lld",&a,&b,&c);
        int ans = 0;
        long long new_a = 2 * b - c;
        if(new_a / a > 0 && new_a % a == 0){
            ans = 1;
        }
        long long new_b = (a+c) / 2;
        if(new_b / b > 0 && new_b % b == 0 && (c-a) % 2 == 0){
            ans = 1;
        }
        long long new_c = 2 * b - a;
        if(new_c / c > 0 && new_c % c == 0){
            ans = 1;
        }
        if(ans == 1){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}