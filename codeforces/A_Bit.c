
#include<stdio.h>
int main(){
    int t,n = 4;
    scanf("%d",&t);
    int ans = 0;
    char a[n];
    while(t--){
        scanf("%s",a);
        if(a[1] == '+'){
            ans++;
        }else{
            ans--;
        }
    }
   printf("%d\n",ans);
   return 0;
}