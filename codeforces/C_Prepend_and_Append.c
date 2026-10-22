#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,j,count = 0;
        scanf("%d",&n);
        char a[n];
        for(i = 0; i<n; i++){
            scanf(" %c",&a[i]);
        }
        if(n > 1){
            for(i = 0,j = n - 1; j>i; i++,j--){
                if((a[i] == '0' && a[j] == '1' )|| (a[i] == '1' && a[j] == '0' )){
                    count++;
                }else{
                    break;
                }
            }
        }
        if(n==1){
            printf("%d\n",1);
        }else{
            printf("%d\n",n - (count + count));
        }
        
        
    }
    return 0;
}
