#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char s[100];
        scanf(" %[^\n]",s);
    
        for(int i =0; s[i] != '\0';i++){
            printf("%d",s[i] - 64);
        }
        printf("\n");
    }
}