#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,v_z = 1;
        scanf("%d",&n);
        int a[n];
        for(i = 0; i<n; i++){
            scanf("%d",&a[i]);
            if(v_z == 1 && a[i] != 0){
                v_z = 0;
            }

        }
        if(v_z == 1){
            printf("%d\n",0);
        }else if(n%2 == 0){
           printf("%d\n",2);
           printf("%d %d\n",1,n);
           printf("%d %d\n",1,n);
        }else{
            printf("%d\n",4);
            printf("%d %d\n",1,n);
            printf("%d %d\n",1,n-1);
            printf("%d %d\n",n-1,n);
            printf("%d %d\n",n-1,n);
        }

    }
    return 0;
}