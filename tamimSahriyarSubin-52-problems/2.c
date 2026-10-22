#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    char n[101];
    scanf("%d", &t);
    while(t--){
        scanf("%s", n);
        int reminder = strlen(n);

        if(n[reminder-1] % 2 == 0){
           printf("even\n");
        }else{
            printf("odd\n");;
        }
    }
    return 0;
}