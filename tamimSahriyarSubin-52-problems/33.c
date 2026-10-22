#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int a,b,c,i,first;
        scanf("%lld %lld %lld",&a,&b,&c);
        if (a % c == 0){
            first = a;
        }else{
            first = a + (c - a % c);
        }
            
        for(i = first; i <= b; i+=c){
            printf("%lld\n", i);
        }
        printf("\n");
    }
    return 0;  
}
