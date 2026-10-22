#include<stdio.h>
int main(){
    char s[101];
    scanf(" %100[^\n]",s);
    int i,count = 0,count2 = 0;
    for(i = 0; s[i]!= '\0';i++){
        if(s[i]>='a' && s[i]<='z'){
            count++;
        }else{
            count2++;
        }
    }
    
    if(count>=count2){
        for(i = 0; s[i]!= '\0';i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i] = 'a' + (s[i] - 'A');
            }
        }
        printf("%s",s); 
    }else if(count2 > count){
        for(i = 0; s[i]!= '\0';i++){
            if(s[i]>='a' && s[i]<='z'){
                s[i] = 'A' + (s[i] - 'a');
            }
        }
        printf("%s",s);
    }
    return 0;
}