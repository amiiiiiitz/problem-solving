#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n,k,i,count = 0,one = 1;
        scanf("%lld %lld",&n,&k);
        char a[n];
        scanf(" %[^\n]",a);
        for(i = 0; i<n; i++){ 
            if(a[i] == '0' && one == 1){
                one = 0;
            }
        }
        
        if(one == 1){
           printf("%lld\n",n); 
        }else{ 
            printf("%lld\n",n-k);
            
        }
    }
}