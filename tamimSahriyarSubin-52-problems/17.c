#include<stdio.h>
#include<string.h>
int main(){
    int t; 
    scanf("%d", &t);
    while(t--){
        char s[1001];
        scanf(" %[^\n]",s);
        int count=0;
        for(int i = 0; i< strlen(s); i++){
            if(s[i]== 'a'||s[i]== 'e'||s[i]== 'i'||s[i]== 'o'||s[i]== 'u'){
                count++;
            }
        }
        printf("Number of vowels = %d\n",count);
    }
    return 0;
}