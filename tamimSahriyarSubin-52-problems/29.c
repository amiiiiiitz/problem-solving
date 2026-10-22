#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        char c;
        scanf(" %c",&c);
        
        if(c>='0' && c<='9'){
            printf("Numerical Digit");
        }else if(c>='A' && c<='Z'){
            printf("Uppercase Character");
        }else if(c>='a' && c<='z'){
            printf("Lowercase Character");
        }else{
            printf("Special Characters");
        }
        if(t>=1){
            printf("\n");
        }
    } 
    return 0; 
}