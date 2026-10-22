#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d",&n);
        int m = n;
        int i = 3,ans = 0;
        while(i--){
            int rem = n % 10;
            ans = ans + pow(rem,3);
            n = n/10;
        }
        if(ans == m){
            printf("%d is an armstrong number!\n",m);
        }else{
            printf("%d is not an armstrong number!\n",m);
        } 
        
    } 
    return 0; 
}