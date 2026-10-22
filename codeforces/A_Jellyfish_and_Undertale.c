#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int a,b,n,i,count,min;
        scanf("%lld %lld %lld",&a,&b,&n);
        long long int s[n];
        for(i = 0; i<n; i++){
            scanf("%lld",&s[i]);
        }
        count = b;
        for(i = 0; i<n; i++){
            if(s[i]<a-1){
                min = s[i];
            }else{
                min = a-1;
            }
            count = count + min;
        }
        
        printf("%lld\n",count);
    }
    return 0;
}

