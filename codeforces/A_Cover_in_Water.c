#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,j,action=0;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
        
        for(i=0; i<n; i++){
            if(s[i]=='.' && (s[i-1]!='.' && s[i-1]!= '1' && s[i-1]!='#')){
                action++;
                s[i]= '1';
            }else if(s[i]=='.' &&  s[i-1]=='#'){
                action++;
                s[i]= '1';
            }else if((s[i]=='.' && s[i-1]=='1') && (s[i+1]=='#' ||(s[i+1]!= '.' && s[i+1]!= '1'))){
                action++;
                s[i]= '1';
            }else if(s[i]=='.' && (s[i-1]=='1' && s[i+1]=='.')){
                action = 2;
                // s[i+1]= '1';
                break;
            }else{
                ;
            }
            
        }
        printf("%d\n",action);
    }
}