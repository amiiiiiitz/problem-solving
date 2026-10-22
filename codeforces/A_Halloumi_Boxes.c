#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,l,i,j;
        scanf("%d %d",&n,&l);
        int a[n];
        for(i=0; i<n; i++){
            scanf("%d",&a[i]);
        }
        if(n==1 && l==1){
            printf("YES\n");
        }else{
            for(i=0; i<n-1; i++){
                if(a[i]>a[i+1]){
                    j=0;
                    break;
                }else{
                    j=1;
                }
            }
            if(j==1 || l>1){
                printf("YES\n");
            }else{
                printf("NO\n");
            }
        }
       
    }
    return 0;
}