#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a==b && c % 2 != 0){
            printf("First\n");
        }else if(a>b){
            printf("First\n");
        }else{
            printf("Second\n");
        }
    }
    return 0;
}