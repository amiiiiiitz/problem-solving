#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n,i;
        scanf("%d",&n);
        int a[n];
        for(int i = 0; i<n; i++){
            scanf("%d",&a[i]);
        }
        int count;
        if(a[0]<a[1]){
            for(int i = 1; i<n-1;i++){
                if(a[i]<a[i+1]){
                    count = 1;
                }else{
                    count = 0;
                    break;
                }
            } 
        }else if(a[0]>a[1]){
            for(int i = 1; i<n-1;i++){
                if(a[i]>a[i+1]){
                    count = 1;
                }else{
                    count = 0;
                    break;
                }
            }
        }
        if(count == 1){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    } 
    return 0; 
}