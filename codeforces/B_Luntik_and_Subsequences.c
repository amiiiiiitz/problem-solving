#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n,i,zero = 0, one = 0;
        scanf("%lld",&n);
        int a[n];
        for(i = 0; i< n; i++){
            scanf("%lld",&a[i]);
            if(a[i] == 1){
                one++;
            }else if(a[i] == 0){
                zero++;
            }
        }
        long long int ans = one * pow(2,zero);
        printf("%lld\n",ans);
    }
    return 0;
}