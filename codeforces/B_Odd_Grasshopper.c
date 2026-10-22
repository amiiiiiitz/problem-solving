#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int coordinate,jumps;
        scanf("%lld %lld",&coordinate,&jumps);
        if(coordinate % 2 == 0 ){
            if(jumps % 4 == 0){
                printf("%lld\n",coordinate);
            }else if(jumps % 4 == 1){
                printf("%lld\n",coordinate + (jumps * (-1)));
            }else if(jumps % 4 == 2){
                printf("%lld\n",coordinate + 1);
            }else if(jumps % 4 == 3){
                printf("%lld\n",coordinate + (jumps+1));
            }
        }else{
            if(jumps % 4 == 0){
                printf("%lld\n",coordinate);
            }else if(jumps % 4 == 1){
                printf("%lld\n",coordinate - (jumps * (-1)));
            }else if(jumps % 4 == 2){
                printf("%lld\n",coordinate - 1);
            }else if(jumps % 4 == 3){
                printf("%lld\n",coordinate - (jumps+1));
            }
        }
    }
    return 0;
}

