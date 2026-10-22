#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n,q,sum=0;
        scanf("%lld %lld",&n,&q);
        long long int a[n],p_s[n+1];
        p_s[0] = 0; 
        for(int i = 0; i<n; i++){
            scanf("%lld",&a[i]);
            sum += a[i];
            p_s[i+1] = sum;
        }
        
        while(q--){
            long long int l,r,k;
            scanf("%lld %lld %lld",&l,&r,&k);
            
            long long int new_sum = p_s[n] - (p_s[r] - p_s[l-1]) + (r-l+1)*k;
            
            if(new_sum % 2 == 1){
                printf("YES\n");
            }else{
                printf("NO\n");
            }
        }
    }
    return 0;
}