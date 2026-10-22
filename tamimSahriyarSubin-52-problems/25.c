#include<stdio.h>
int gcd(int a, int b){
    int temp;
    while(b != 0){
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main(){
    int T;
    scanf("%d", &T);
    while(T--){
        int a,b;
        scanf("%d %d",&a,&b);
        long long m = (long long)(a/gcd(a,b))*b;
        
        printf("LCM = %lld\n",m);
         
    }
    return 0;
}