#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int l = n;
        char s[n][10000];
        
        while(n--){
            scanf("%s",s[n]);  
        }
            
        char max[n][10000];
        
        //     // int temp = max[j];
        // for(int j = 0; j < n; j++){
        //     // max[j][0] = s[j][0];
        //     for(int i = 0; s[i][j]!= '\0'; i++){
        //         // if(s[j][i - 1] == ' '){
        //         //     j++;
        //         //     max[j][i] = s[j][i]; 
        //         // }
        //     }
        // }
        
        // for(int i = 0; max[i]!='\0'; i++){
        //     for(int j = i+1; max[j]!='\0'; j++){
        //         if(max[i]>max[j]){
        //             char temp = max[i];
        //             max[i] = max[j];
        //             max[j] = temp;
        //         }
        //     }
        // }
        for(int i = 0; i<l; i++){
            
            for(int j = 0; j<l; j++){
                if(s[j][i] > s[j+1][i]);
                
            }
        }




        for(int i = 0; max[i]!='\0'; i++){
            for(int j = 0; s[j]!='\0'; j++){
                if(max[i] == s[j] && (s[j-1] == ' ' || s[j-1] == '\0')){
                    for(int z = j; s[z]!=' ' && s[z] != '\0'; z++){
                        printf("%c",s[z]);
                    }
                    printf("\n");
                }
            }
        }
        
    }
    return 0;  
}
