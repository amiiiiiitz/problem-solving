#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,sorted = 1,dif = __INT_MAX__;
        scanf("%d",&n);
        int a[n];
        for(i = 0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if(i>0 && a[i] < a[i-1]){
                sorted = 0;
            }else if(sorted == 1 && i>0 && (a[i] - a[i-1] <= dif)){
                dif = a[i] - a[i-1];
            }
        }
        if(sorted == 1){
            if(dif == 0 || dif == 1){
                printf("%d\n",1);
            }else if(dif == 2){
                printf("%d\n",2);
            }else{
                printf("%d\n",(dif / 2)+1);
            }
            
        }else{
            printf("%d\n",0);
        }
    }
    return 0;
}


