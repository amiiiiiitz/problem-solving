#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,a,b;
        scanf("%d %d %d",&n,&a,&b);
        if(n == a  && n == b){
            printf("Yes\n");
        }else if(n - ( a + b) >= 2){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
    return 0;
}

