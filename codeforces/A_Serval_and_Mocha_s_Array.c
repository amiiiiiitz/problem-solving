#include<Stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,j;
        scanf("%d",&n);
        int a[n],gcd=0,value1,value2;
        for(i = 0; i < n; i++){
            scanf("%d",&a[i]);
        }
        
        for(i = 0; i<n; i++){
            value1 = a[i];
            for(j = i+1; j<n; j++){
                value2 = a[j];
                while(a[i] != 0){
                    int t = a[i];
                    a[i] = a[j] % a[i];
                    a[j] = t;
                }
                
                if(a[j]<=2){
                    gcd = 1;
                    break;
                }else{
                    a[i] = value1;
                    a[j] = value2;
                }
            }
            if(gcd == 1){
                break;
            }
        }
        
        if(gcd == 1){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}