#include<stdio.h>
int main(){
    char s[200];
    scanf(" %[^\n]",s);
    for(int i = 0; s[i]!= '\0'; i++){
        if(s[i] == '.'){
            printf("0");
        }else if(s[i] == '-' && s[i+1] == '.'){
            printf("1");
            i++;
        }else{
            printf("2");
            i++;
        }
    }
    printf("\n");
    return 0;
}