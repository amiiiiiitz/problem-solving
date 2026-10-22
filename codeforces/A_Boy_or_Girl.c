#include<stdio.h>
int main(){
    char s[101];
    scanf(" %[^\n]",s);
    int count[26] = {0},fre = 0;
    
    for(int i = 0; s[i] != '\0'; i++){
        count[s[i] - 'a']++;
        if(count[s[i] - 'a'] == 1){
            fre++;
        } 
    }
    
    if(fre % 2 == 0){
        printf("CHAT WITH HER!");
    }else{
        printf("IGNORE HIM!");
    }
}