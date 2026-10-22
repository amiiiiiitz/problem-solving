#include<stdio.h>
int five=0,two=0;
void fac(int n,int i,int N){
    int count_loop = N,j= 1;
    while(1){
            if(count_loop == 1){
                break; 
            }else if(n%i==0 && i == 2){
               two++;
               n = n/i;
            }else if(n%i==0 && i == 5){
               five++;
               n = n/i;
            }else if(n%i==0){
                n = n/i;
            }else if(i>=n){
                n = N-j;
                i = 2;
                count_loop--;
                j++;
            }else{
                i++;
            }
        }
        
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int N = n;
        int i = 2;
        fac(n,i,N);
        if(five<two){
            printf("%d\n",five);
        }else{
            printf("%d\n",two);
        }
        five = 0, two = 0;
    }
}