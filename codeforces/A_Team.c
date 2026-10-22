#include<stdio.h>
int main(){
    int n,count = 0;
    scanf("%d",&n);
    while(n--){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if((a == 1 && b == 1)||(a == 1 && c == 1)||(b == 1 && c == 1)){
            count++;
        }
    }
    printf("%d\n",count);
}