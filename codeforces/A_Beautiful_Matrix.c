#include<stdio.h>
int main()
{
    int m[5][5],r,c;
    for(int i = 1; i<=5 ; i++){
        for(int j = 1; j<=5 ; j++){
            scanf("%d",&m[i][j]);
            if(m[i][j] == 1){
                r = i;
                c = j;
            }
        }
    }
    if(r>3){
        r = r - 3;
    }else{
        r = 3 - r;
    }
    if(c>3){
        c = c - 3;
    }else{
        c = 3 - c;
    }
    printf("%d\n",r+c);
    return 0;
}