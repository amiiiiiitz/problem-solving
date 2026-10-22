#include<stdio.h>
long long int gcd(long long int a, long long int b){
    int temp;
    while(b != 0){
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int a,b,c,i,gc;
        scanf("%lld %lld %lld",&a,&b,&c);
        
        gc =(a/gcd(a,b))*b;
                   
        for(i = gc; i <= c; i += gc){
            printf("%lld\n", i);
        }
        printf("\n");
    }
    return 0;  
}
