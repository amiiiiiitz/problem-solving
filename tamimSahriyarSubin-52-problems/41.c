#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n;
        scanf("%lld",&n);
        double ans = 1.0;
        double ans2 = 1.0;
        for(double i = 2.0; i <= n; i++){
            ans = ans * i;
            ans2 = (i/ans) + ans2;
        }
        printf("%.4lf\n",ans2);
    }
}