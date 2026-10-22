#include<stdio.h>
int main(){
    char s [1000];
    scanf(" %[^\n]",s);
    if(s[0] >= 'a' && s[0]<= 'z'){
        s[0] = 'A' + (s[0] - 'a');
    }
    
    printf("%s\n",s);
}