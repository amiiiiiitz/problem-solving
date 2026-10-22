#include<stdio.h>
int main(){
    long long int n,m,z;
    scanf("%lld %lld %lld",&n,&m,&z);
    long long n_c = n,m_c = m;
    long long gcd;
    
    while(m!=0){
        long long int t = m;
        m = n % m;
        n = t;
    }
    gcd = n;
    
    long long int lcm = (n_c * m_c) / gcd;
    printf("%lld\n",z/lcm);
    return 0;
}