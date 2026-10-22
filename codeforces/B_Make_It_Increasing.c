#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n,i,j,operation = 0;
        scanf("%lld",&n);
        long long int a[n];
        for(j = 0; j<n; j++){
            scanf("%lld",&a[j]);
        }
        
        for(i = n-2;i>=0;i--){
            while(a[i] >= a[i+1]){
                operation++ ;
                a[i] /= 2 ; 
                if(a[i] == 0){
                    break;
                }  
            }
            if((a[i] == 0) && (a[i+1] == 0)){
                operation = -1;
                break;
            }
        }
        printf("%lld\n",operation); 
    }
}

