#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,x,sum = 0,count = 0,r;
        scanf("%d %d %d",&n,&k,&x);
        int a[n];
        r = k;
        while(sum<n){
            if(x != 1){
                k = 1;
            }else if(x == 1 && k == 1){
                break;
            }else{
                k = 2;
            }
            if(n - sum == 3 && x != 3 && r >= 3){
                k = 3;
            }
            sum = sum + k;
            a[count] = k;
            count++;

        }

        if(sum == n){
            printf("YES\n");
            printf("%d\n",count);
            for(int j = 0; j<count; j++){
                printf("%d ",a[j]);
            }
            printf("\n");
        }else{
            printf("NO\n"); 
        }
        
    }
    return 0;
}