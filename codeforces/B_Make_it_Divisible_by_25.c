#include<stdio.h>
#include<string.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char a[20];
        scanf(" %[^\n]",a);
        int zero = 0, five = 0,op1 = 0, op2 = 0, op3 = 0,op4 = 0, i;
        for(i = strlen(a) - 1 ; i>0 ; i--){

            if((a[i] == '0') && (zero == 0)){
                zero = 1;
            }
            if((a[i] == '5') && (five == 0)){
                five = 1;
            }

            if((zero == 1) && (a[i-1] == '0')){
                op2 = 0;
                op3 = 0;
                op4 = 0;
                break;  
            }else{
                op1++;
            }
            if((zero == 1) && (a[i-1] == '5')){
                op1 = 0;
                op3 = 0;
                op4 = 0;
                break;
            }else{
                op2++;
            }
            if((five == 1) && (a[i-1] == '2')){
                op2 = 0;
                op1 = 0;
                op4 = 0;
                break;
            }else{
                op3++;  
            }
            if((five == 1) && (a[i-1] == '7')){
                op2 = 0;
                op3 = 0;
                op1 = 0;
                break;
            }else{
                op4++;
            }
        }

        if(op1 > 0){
            printf("%d\n",op1);
        }else if(op2 > 0){
            printf("%d\n",op2);
        }else if(op3 > 0){
            printf("%d\n",op3);
        }else{
            printf("%d\n",op4);
        }
        
    }
    return 0;
}