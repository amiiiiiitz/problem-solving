#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int x,n;
        scanf("%d %d",&x,&n);
        int ans = x;
        if(x>n){
            printf("Invalid!\n");
        }else{
            while(ans<= n){
                    printf("%d\n",ans);
                    ans += x;    
                }
            }
        printf("\n");
        
    }
      
}
