#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i;
        scanf("%d",&n);
        int a[n];
        int b[n];
        for(i = 0; i<n; i++){
            scanf("%d",&a[i]);
            b[i] = (n+1) - a[i]; 
        }
        
        for(i = 0; i<n; i++){
            printf("%d ",b[i]);
        }
        printf("\n");
    }
} 