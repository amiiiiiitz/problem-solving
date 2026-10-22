#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        char s[11];
        scanf(" %[^\n]",s);
        int l = strlen(s);
        int i, j, equal = 1;
        if(l>1){
            for(i = 1; i < l; i++) {
                if(s[i] != s[i-1]) {
                    equal = 0;
                    char temp = s[i];
                    s[i] = s[i-1];
                    s[i-1] = temp;
                    break;
                }
            }
        }
        if(equal == 1) {
            printf("NO\n");
        } else {
            printf("YES\n");
            printf("%s\n",s);
        }
    }

    return 0;
}
