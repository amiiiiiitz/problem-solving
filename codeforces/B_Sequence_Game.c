#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int l,i,count = 0;
        scanf("%d",&l);
        int a[l*2];
        
        for(i = 0; i < l+count; i++){
            scanf("%d",&a[i]);
            if(i > 0 && a[i] < a[i-1]){
                int temp = a[i];
                a[i]=1;
                a[i+1] = temp;
                i++;
                count++;
            }
        }
        printf("%d\n",count + l);
    
        for(i = 0; i < l+count; i++){
            printf("%d ", a[i]);
        }
        
        printf("\n");    
    }
}
