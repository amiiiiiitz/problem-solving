#include<stdio.h>
#include<string.h>
int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--){
        char s[200001];
        scanf(" %[^\n]",s);
        long long i,count = 0,ans = 1;
        long int length = strlen(s);
        
        for(i = 0; i < length; i++){
            if(s[i] == '('){
                count++;   
            }else{
                count--;
            }
            if(i>0 && i < length - 1 && count == 0){
                ans = 0;
                break;
            }
        }
        
        if(ans == 1){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
    }
    return 0;
}