#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    // int t;
    // scanf("%d\n", &t);
    // while(t){
    //     char ara[100]; 
    //     gets(ara);
        
    //     int length = strlen(ara);
    //     // printf("%d\n", length);
    //     int count = 0;
    //     int strt = 0;
    //     for(int i=0; i<length; i++){
    //         if(ara[i]>='0' && ara[i]<='9'){
    //             if(strt==0){
    //                 count++;
    //                 strt++;
    //             } 
    //         }else{
    //             strt=0;
    //         }
    //     }
    //     printf("%d\n", count);
    //     t--;
    // }


    // char line [] = "1 -2 10000 -50 20 7 445";
    // char *p, *e;
    // long input;
    // int count = 0;
    // p = line;

    // for(p = line; ; p = e){
    //     input = strtol(p, &e, 10);
    //     if(p == e){
    //         break;
    //     }
    //     count++;
    // }
    // printf("%d\n", count);




    int t;
    scanf("%d", &t);
    getchar();
    
    while (t) {
        char ara[10000];
        fgets(ara, sizeof(ara), stdin);
        ara[strcspn(ara, "\n")] = '\0';
        
        int length = strlen(ara);
        int count = 0;
        int strt = 0;
        
        for (int i = 0; i < length; i++) {
            if (ara[i] >= '0' && ara[i] <= '9') {
                if (strt == 0) {
                    count++;
                    strt = 1;
                }
            } else {
                strt = 0;
            }
        }

        printf("%d\n", count);
        t--;
    }

   




    return 0;
}