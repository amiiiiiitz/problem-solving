#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int x,k;
        scanf("%d %d",&x,&k);
        int ans = 1,power = 1;
        for(int i = 0; i< k ; i++){
            power = power * x ;
            ans += power;
        }
        printf("Result = %d\n",ans);
    }
}