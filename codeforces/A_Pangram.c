#include<stdio.h>
int main(){
    int n,pangram = 1;
    scanf("%d",&n);
    char s[n+1];
    scanf(" %[^\n]",s);
    char a[] = "abcdefghijklmnopqrstuvwxyz";
    char b[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for(int i = 0; a[i] != '\0'; i++){
        for(int j = 0; j<n; j++){
            if(a[i] == s[j] || b[i] == s[j]){
                pangram = 1;
                break;
            }else{
                pangram = 0;
            }
        }
        if(pangram == 0){
            break;
        }
    }
    if(pangram == 0){
        printf("NO\n");
    }else{
        printf("YES\n");
    }
}