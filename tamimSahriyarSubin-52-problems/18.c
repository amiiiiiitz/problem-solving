#include<stdio.h>
#include<string.h>
int main(){
    int t; 
    scanf("%d", &t);
    while(t--){
        char s[1001];
        scanf(" %[^\n]",s);

        for(int i = 0; i< strlen(s); i++){
            if(s[i]== 'a'||s[i]== 'e'||s[i]== 'i'||s[i]== 'o'||s[i]== 'u'){
                printf("%c",s[i]);
                s[i]= 1;
            }
        }
        printf("\n");
        for(int i = 0; i< strlen(s); i++){
            if(s[i] != 1 && s[i] != ' '){
               printf("%c",s[i]);
            }
        }
        printf("\n");
    }
    return 0;
}