#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[100];
        int c = 0,i;
        scanf("%s",s);
        for(i = 1; s[i] >= 'a' && s[i] <= 'z' ; i++){
            c++;
        }
        if(c+1>10){
            printf("%c%d%c\n",s[0],c-1,s[i-1]);
        }else{
            printf("%s\n",s);
        }
    }
    return 0;
}

