#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int even[21],odd[21];
        // even[0] = 1;
        // even[1] = 1;
        // odd[0] = 1;
        // odd[1] = 1;
        for(int i = 0; i<=n; i++){
            for(int j = 0; j<=i; j++){
                if(i%2 == 0 && i>1){
                    if(j>0 && j<i){
                        printf("%d ",even[j]+even[j-1]);
                        odd[j] = even[j]+even[j-1];
                    }else{
                        even[j]= 1;
                        odd[j] = 1;
                        printf("1 ");
                    }
                }else{
                    if(j>0 && j<i){
                        printf("%d ",odd[j]+odd[j-1]);
                        even[j] = odd[j]+odd[j-1];
                    }else{
                        even[j]= 1;
                        odd[j] = 1;
                        printf("1 ");
                    }
                }    
            }
            printf("\n");
        }
        printf("\n");
    }
}

