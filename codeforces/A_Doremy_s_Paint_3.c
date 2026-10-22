#include<stdio.h>
int main()
{   
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,j,count = 0,count2=0,same=1;
        scanf("%d",&n);
       
        int p[n];
        for(i=0;i<n;i++){
            scanf("%d",&p[i]);
            if(i!=0 && p[0]==p[i]){
                same++;
            }    
        }
        
        
        for(j=0;j<n;j++){
            if(p[0]==p[j]){
                count++;
            }
        } 

        for(j=1;j<n;j++){
            if(p[0]!=p[j]){
                i = p[j];
                break;
            }
        }
        for(j=1;j<n;j++){
            if(i==p[j]){
                count2++;
            }
        }
        
        if(n==2 || same == n)
        {
            printf("Yes\n");
        }else if(n%2==0 && ((count == n/2) && (count2 == n/2)))
        {
            printf("Yes\n");
        }else if(n%2!= 0 && (count == (n+1)/2 || count2 == (n+1)/2) && ((count2 == n - count) || (count == n - count2)))
        {
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
    return 0;
}
