#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[101];
        scanf(" %[^\n]",s);
        
        int i,count_1=0,count_0=0;
        for(i = 0; s[i] != '\0'; i++){
            if(s[i] == '0'){
                count_0++;
            }else{
                count_1++;
            }
        }
        if(count_0 == count_1){
            if(count_1 % 2 != 0){
                printf("DA\n");
            }else{
                printf("NET\n");
            }
        }else if(count_0 < count_1){
            if(count_0 % 2 != 0){
                printf("DA\n");
            }else{
                printf("NET\n");
            }   
        }else{
            if(count_1 % 2 != 0){
                printf("DA\n");
            }else{
                printf("NET\n");
            }
        }
    }
    
    return 0;
}