#include<stdio.h>

int main(){
    int n,m,k,i,j=1,c=1,action,ans=0;
    scanf("%d %d %d",&n,&m,&k);
    int a[m+1];
    for(i = 1; i<= m+1; i++){
        scanf("%d",&a[i]);
    }
    
    int b[n*(m+1)];
    for(i = 1; i<=n*(m+1) ; i++){
        b[i]=0;
    }
    for(i=1;i<=m+1;i++){
        int num = a[i];
        while(num>0){
            int rem = num % 2;
            b[j] = rem;
            num = num / 2;
            j++;
        }
        j=(n*c)+ 1;
        c++;
    }
    
    for(i = 1; i<=n*m ;){
        j = (n*m)+1;
        while(j<=n*(m+1)){
            if(b[j] != b[i]){
                action++;
                j++;
                i++;
            }else{
                j++;
                i++; 
            }
        }
        if(action <= k){
            ans++; 
        }
        action = 0;
    }
        
    printf("%d\n",ans);
}