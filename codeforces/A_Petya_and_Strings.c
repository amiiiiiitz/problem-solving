#include<stdio.h>
int main(){
    char s[100],m[100];
    scanf("%s",s);
    scanf(" %s",m);
    
    int i,j;
    for(i = 0; s[i] != '\0'; i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = 'a' + (s[i] - 'A');
        }
    }
    for(i = 0; m[i] != '\0'; i++){
        if(m[i] >= 'A' && m[i] <= 'Z'){
            m[i] = 'a' + (m[i] - 'A');
        }
    }
    for(i = 0,j = 0; s[i] != '\0'; i++,j++){
        if(s[i] > m[j]){
            printf("%d\n",1);
            return 0;
        }else if(s[i]<m[j]){
            printf("%d\n",-1);
            return 0;
        }
    }
    printf("%d\n",0);
    return 0;
}
