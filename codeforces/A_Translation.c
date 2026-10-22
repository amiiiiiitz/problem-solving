#include<stdio.h>
#include<string.h>
int main()
{
    char a[101];
    char b[101];
    int i,j,k,l,ans = 1;
    scanf("%s",a);
    i = strlen(a);
    scanf(" %s",b);
    j = strlen(b);
    for(k = 0, l = j-1; l>=0 ; k++,l--)
    {
        if(a[k] != b[l]){
           ans = 0;
           break; 
        }
    }
    if(ans == 1 && i == j){
        printf("YES\n");
    }else{
        printf("NO\n"); 
    }
}