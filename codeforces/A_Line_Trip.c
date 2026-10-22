#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x,i,j;
        scanf("%d %d",&n,&x);
        int a[n];
        for(i=0; i<n; i++){
            scanf("%d",&a[i]);

        }
        int g_fd = (x - a[n-1]) * 2;
        int dif = a[0];

        int gs = 0;
        if(n==1){
            gs = a[0];
        }else{
            for(i=n-1;i>0;i--){
                if(a[i]-a[i-1] > gs){
                     gs = a[i]-a[i-1];
                }
             }
        }
        
        if(gs>=g_fd && gs>=dif){
            printf("%d\n",gs);
        }else if(dif>=g_fd && dif>=gs){
            printf("%d\n",dif);
        }else{
            printf("%d\n",g_fd);
        }
    }
    return 0;
}