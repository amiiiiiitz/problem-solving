#include<stdio.h>
#include<math.h>
int main(){
    int num, sq_rt,t;
    scanf("%d", &t);
    while(t){
        scanf("%d", &num);
        sq_rt = sqrt(num);
        if(sq_rt * sq_rt == num){
            printf("YES\n");
        }else{
            printf("NO\n"); 
        }
        t--;  
    }
    return 0;
}