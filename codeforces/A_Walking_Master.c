#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int a,b,c,d,count = 0;
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
        while(1){
            if(b==d && a==c){
                break;
            }else if(b>d){
                count = -1;
                break;
            }else if(b==d && a<c){
                count = -1;
                break;
            }else if(b<d){
                count = count + (d-b);
                b = d;
                a = count + a;
            }else if(b==d && a>c){
                count = count + (a-c);
                a = c;
            }
        }
        printf("%lld\n",count);
    }
    return 0;
}
