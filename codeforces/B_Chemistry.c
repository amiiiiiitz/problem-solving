#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d %d",&n,&k);
        char s[n];
        scanf(" %[^\n]",s);
        int i,j,count = 1,odd = 0;  
       
        for(i = 0; i<n ; i++){
            if((s[i]>= 'a' && s[i] <= 'z') || (s[i]>= 'A' && s[i] <= 'Z')){
                for(j = 0 ; j < n  ; j++){
                    if(s[i] == s[j] && j!= i){
                        count++;
                        s[j] = '*';
                    }
                }
                if(count % 2 != 0){
                    odd = odd + 1;
                    count = 1;
                }else{
                    count = 1;
                }
            } 
            
        }
        
        if(odd == 0){
            printf("YES\n");
        }else if(k >= odd){
            printf("YES\n");
        }else if(odd - k == 1){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        
        
    }
}
// if(count % 2 == 0){
//     even = even + count;
//     count = 0;
// }else even  = even + count - (count % 2); printf("c = %d\n",count); printf("%d\n",odd); printf("odd con \n");