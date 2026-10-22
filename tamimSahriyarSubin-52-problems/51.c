#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[128];
        char ss[128];
        scanf("%s %s",s,ss);
        // scanf(" %[^\n]",ss);
        printf("%s %s\n",s,ss);
        int i,j,ans;
        
        for(i=0;i<strlen(s);i++){
            if(s[i]==ss[0]){
                j=i;
                for(int k = 1;k<strlen(ss);i++,k++){
                    if(s[i+1]==ss[k]){
                        if(k == strlen(ss)-1){
                            ans=j;
                            i = strlen(s);
                        }else{
                            ;
                        }
                    }else{
                        break;
                    }
                }
            }
        }
       
        printf("%d\n",ans);
    }
}