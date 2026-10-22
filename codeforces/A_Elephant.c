#include<stdio.h>
int main()
{
    int x,sum = 0,step = 5,count = 0;
    scanf("%d",&x);
    while(sum != x){
        if(sum < x){
            sum = sum + step;
            count++;
        }else if(sum > x){
            sum = sum - step;
            step--;
            count--;
        } 
    }
    printf("%d\n",count);
    return 0;
}