#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,count=0,operation = 0;
        scanf("%d",&n);
        int a[n];
        for(i = 0; i<n; i++){
            scanf("%d",&a[i]);
            if(a[i] == -1){
                count++;
            }
        }
        i = 0;
        if(count > n - count || count % 2 != 0){
            while(1){
                if(count <= n - count && count % 2 == 0){
                    break;
                }
                if(a[i] == -1){
                    a[i] = 1;
                    i++;
                    count--;
                    operation++;
                }else{
                    i++;
                }
            }
            printf("%d\n",operation);
        }else{
            printf("%d\n",0);
        }
    }
    return 0;
}