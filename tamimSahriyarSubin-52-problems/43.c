#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int p,q,c,temp = 1;
        scanf("%d %d %d",&p,&q,&c);
        // for(int i = q; i>0; i--){
        //     temp = temp * p;
        // }
        // for(int i = 1; i<=q;i++){
        //     temp = (temp * p)% c;
        //     printf("Result = %d\n",temp);
        // }
        // printf("Result = %d\n",temp % c);
        while(q!=0){
            if(q % 2 == 0){
                q /= 2;
                p = (p * p) % c;
            }else{
                q = q - 1;
                temp = (p * temp) % c;
            }
        }
       
        printf("Result = %d\n",temp);
        
    }
}