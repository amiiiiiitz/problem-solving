#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[100];
        int i,j;
        scanf(" %[^\n]", s);
    
        for(i = 0; s[i] != '\0'; i++){
            if(s[i] >= '1' && s[i]<= '3'){
                for(j = i+1; s[j] != '\0'; j++){
                    if(s[j] >= '1' && s[j]<= '3'){
                        if(s[i] > s[j]){
                            char temp = s[i];
                            s[i] = s[j];
                            s[j] = temp;
                        }
                    }
                }
            }
        }
        for(i = 0;s[i] != '\0' ; i++){
            printf("%c",s[i]);
        }
        printf("\n");
    }
}