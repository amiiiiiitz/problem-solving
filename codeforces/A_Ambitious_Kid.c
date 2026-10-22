#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int a[t];
    for(int i = 0; i<t; i++){
        scanf("%d",&a[i]);
    }
    int min = 100000000;
    if(t>1){
        for(int i = 0; i<t; i++){
            if(a[i] == 0){
                min = 0;
                break;
            }
            if(a[i] < 0){
                a[i] = a[i] * (-1);
            }
            if(a[i] < min){
                min = a[i];
            }
        }
    }else{
        min = a[0];
        if(min < 0){
            min = min * (-1);
        }
    }
   
    
    min = 0 - min ;
    printf("%d\n",min * (-1));
    return 0;
}