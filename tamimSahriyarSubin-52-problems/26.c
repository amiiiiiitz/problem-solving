#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        float n;
        scanf("%f",&n);
        int day=0;
        while(n>=1){
            n/=2;
            day++;
        }
        printf("%d days\n",day);
    } 
    return 0; 
}