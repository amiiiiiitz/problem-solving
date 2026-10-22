#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char word[1001];
        scanf(" %[^\n]", word);
        int count[26];
        for(int i = 0; i<26; i++){
            count[i]= 0;
        }
        for(int i = 0; i < strlen(word); i++){
            if(word[i] >= 'a' && word[i] <= 'z'){
                count[word[i]-'a']++;
            }
        }
        for(int i = 0; i < 26; i++){
            if(count[i] != 0){
                printf("%c = %d\n", 'a'+ i,count[i]);
            }
        }
        printf("\n");
    }
}