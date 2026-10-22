#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,last_number,count = 0;
        scanf("%d",&n);
        if(n>9){
            while(n>0){
                n = n / 10;
                if(n>=1 && n<=9){
                    last_number = n;
                }
                count++;
            }
            printf("%d\n",(9*count) - (9 - last_number));
        }else{
            printf("%d\n",n);
        }  
    }
    return 0;
}
// ..1 2 3 4 5 6 7 8 9 ..10 20 30 40 50 60 70 80 90.. ..100 200 300 400 500 600 700 800 900.. 1000 2000 3000 4000 5000 6000 7000 8000 9000.. 10000