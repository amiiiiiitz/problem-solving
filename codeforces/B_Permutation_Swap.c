#include<Stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i;
        scanf("%d",&n);
        int dif,t,k;
        int a[n];
        for(i = 0; i<n ; i++){
            scanf("%d",&a[i]);
        }
        if(a[0] > (0 + 1)){
            k = a[0] - (0+1);
        }else{
            k = (0+1) - a[0];
        }
        for(i = 1; i<n ; i++){
            if(a[i] != (i + 1)){
                if(a[i] > (i + 1)){
                    dif = a[i] - (i+1);
                }else{
                    dif = (i+1) - a[i];
                }
                while(k != 0){
                    t = k;
                    k =  dif % k;
                    dif = t;   
                }
                k = dif;
            }
        }
        printf("%d\n",k);   
    }
    
    return 0;
}