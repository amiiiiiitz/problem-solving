#include<stdio.h>
#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[101];
        scanf(" %[^\n]",s);
        int l = strlen(s);
        if(s[0] != s[l-1]){
            if(s[0] == 'a'){
                s[0] = 'b';
            }else{
                s[0] = 'a';
            }
        }
        printf("%s\n",s);
    }
    return 0;
}

