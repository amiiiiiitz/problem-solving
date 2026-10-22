#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,rev = 0;
        scanf("%d",&n);
        while(n!=0){
            rev = rev * 10;
            rev = n % 10 + rev;
            n = n / 10;
        }
        printf("%d\n", rev);
 
    }
}