#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[50];
        scanf(" %[^\n]",s);
        for(int i = 0; i<strlen(s); i++){
            if(s[i ]== 'L'){
                s[i] = s[i-1];
                // printf("%c\n",s[i]);
            }else if(s[i] == 'R'){
                s[i] = s[i+1];
                // printf("%c\n",s[i]);
            }else{
                ;
            }
        }
        for(int i = 0; i<strlen(s); i++){
            printf("%c",s[i]);
        }
    }
}