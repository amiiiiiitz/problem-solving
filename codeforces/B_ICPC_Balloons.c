#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char s[n];
        scanf(" %[^\n]",s);
        int count[26] = {0},fre = 0;
        for(int i = 0; i<n; i++){
            if(count[s[i] - 'A'] == 0){
                fre++;
                fre++;
                count[s[i] - 'A']++;
            }else{
                fre++;
            }
        }
        printf("%d\n",fre);
    }
    return 0;
}