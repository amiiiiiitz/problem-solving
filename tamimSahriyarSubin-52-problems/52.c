#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[129],a[129];
        scanf(" %[^\n' ']",s);
        scanf(" %[^\n]",a);
        int i=0,j=0,k,count = 0;
        for(; i<strlen(s);i++)
        {
           if(s[i]!= a[j])
           {
                j=0;
           }else
           {
                j++;
           }
           if(j == strlen(a))
           {
                count++;
                i= i-(j-1);
                j = 0;
           }
        }
        printf("%d\n",count);
    }
}