
#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {

        int n,m,i=0,j=0;
        scanf("%d %d",&n,&m);
        int l = 27;
        char x[l],s[m+1];
        scanf(" %[^\n]",x);
        scanf(" %[^\n]",s);

        for(i=n;i<l;i++){
            x[i] = x[i % n];
        }


        int res=-2;
        for(i=0; i<l; i++){
            int ii=0;
            if(x[i]==s[ii]){
                int k=i+1;
                for(ii=1; ii<m; ii++){
                    if(x[k]!=s[ii]) break;
                    k++;
                }
                if(ii==m){
                    res=k;
                }
            }
            if(res!=-2) break;
        }
        //printf("\n%d\n",res);

        if(res==-2) printf("%d\n",-1);
        else{

             if(res<=n){
                printf("%d\n",0);
             }
             else{
                int j, cnt=1;
                for(j=1; ;j++){
                    n = n * 2;
                    if(n < res) cnt++;
                    else break;
                }
                printf("%d\n",cnt);
             }

        }
    }
    return 0;
}
