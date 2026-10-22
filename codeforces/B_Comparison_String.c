#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,count = 1,max = 1;
        scanf("%d",&n);
        char s[n];
        scanf(" %s",s);
        for(i = 1; i<n; i++){
            if(s[i] != s[i-1]){
                count = 1;
            }else{
                count++;
            }
            if(count > max){
                max = count;
            }
        }
        printf("%d\n",max+1);
    }
    return 0;
}