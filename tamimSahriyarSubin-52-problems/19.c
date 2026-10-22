#include<stdio.h>
#include<string.h>
int co(char s[]){
    int count=0;
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == ' '){
            count++;
        }
    }
    return count;
}
int main(){
    int t; 
    scanf("%d", &t);
    while(t--){
        char s[10001];
        scanf(" %[^\n]",s);
        printf("Count = %d\n",co(s)+1);
    }
    return 0;
}