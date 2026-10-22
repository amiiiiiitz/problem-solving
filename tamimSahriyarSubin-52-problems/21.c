#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[1001];
        scanf(" %[^\n]", s);
        int len = strlen(s) ;
    
        for(int i=len - 1; i>=0 ; i--){
            printf("%c",s[i]);
        }
        printf("\n");
        
    }
}