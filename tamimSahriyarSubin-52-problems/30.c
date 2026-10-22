#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int c;
        scanf("%d",&c);
        int ans=1;
        for(int i = 1; i<=c; i++){
            for(int j = 2; j <= sqrt(i) ; j++){
                if(i % j == 0){
                    ans= ans + j; 
                    if(j != i / j){
                        ans+= i/j;
                    }
                }
            }
            if(ans==i && ans != 1){
                printf("%d\n",i);
            }
        } 
        
    } 
    return 0; 
}