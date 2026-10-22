#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[1002];
        scanf(" %[^\n]", s);
        int l=0;
    
        for(int i=0; i<= strlen(s); i++){
            if(s[i] != ' ' && s[i] != '\0'){
                l++;
            }else{
                int j = i-1;
                while(l--){
                    printf("%c",s[j]);
                    j--;
                }if(i<strlen(s)){
                    printf(" ");
                }
                l=0;
            }
        }
        printf("\n");
        // see the book solution. time complexity is better
    }
}