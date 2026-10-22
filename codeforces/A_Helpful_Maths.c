#include<stdio.h>
#include<string.h>
int main(){
    char s[101];
    scanf(" %[^\n]",s);
    int len = strlen(s);
    for(int i = 0; i<len; i=i+2){
        for(int j = 0; j<len - i - 2; j=j+2){
            if(s[j]>s[j+2]){
                char t = s[j];
                s[j] = s[j+2];
                s[j+2] = t;
            }
        }
    }
    printf("%s\n",s);
}