#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,only_zero = 1, only_non_zero = 1, count1 = 0,segment = 0;
        scanf("%d",&n);
        int a[n];
        for(i = 0; i<n ; i++){
            scanf("%d",&a[i]);
            if(a[i] != 0){
                count1 = 1;
                if(only_zero == 1){
                    only_zero = 0; 
                }
            }else{
                if(count1 > 0){
                    segment++;
                }
                count1 = 0;
                if(only_non_zero == 1){
                    only_non_zero = 0; 
                }
            }
        }
        if(n > 1){
            if(a[n-1] != 0)
            segment++;
        }
        if(only_non_zero == 1 && only_zero == 0){
            printf("%d\n",1);
        }else if(only_non_zero == 0 && only_zero == 1){
            printf("%d\n",0);
        }else if(segment > 1){
            printf("%d\n",2);
        }else{
            printf("%d\n",1);
        }
    }
    return 0;
}