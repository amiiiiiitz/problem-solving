#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        char s[31],t[31];
        
        scanf(" %s",s);
        scanf(" %[^\n]",t);
       
        int slength = strlen(s);
        int tlength = strlen(t);
        int match = -1,i,j,k;
        
        for(i = (slength - 1),k = (tlength - 1); i>=0; i--){
            for(j = k; j>= 0 ;j--){
                if((s[i] == t[j]) && (t[k] != t[j])){
                    match = 0;
                    break;
                }else if((s[i] == t[j]) && (t[k] == t[j])){

                    k--;
                    match = 1;
                    break;
                }else if(i == 0 && k>=0 && s[i]!= t[k]){
                    match = 0;
                }
            }
            if(match == 0 || k < 0){
                break;
            }
        }
        if(match == 1 && k < 0){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}
