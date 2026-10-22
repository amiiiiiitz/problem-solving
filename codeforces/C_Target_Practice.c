#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int i,j;
        char a[10][10];
        for(i = 0; i<10; i++){
            for(j = 0; j<10; j++){
                scanf("%c",&a[i][j]);
                if(a[i][j] != 'X' && a[i][j] != '.'){
                    j--;
                }    
            } 
        }

        int c1 = 0,c2 = 0,c3 = 0,c4 = 0,c5 = 0;
      
        for(i = 0; i<5; i++){
            for(j = 0; j<5; j++){
                if(a[i][j] == 'X' && i == 0){
                    c1++;
                }else if(a[i][j] == 'X' && i == 1 && j > 0){
                    c2++;
                }else if(a[i][j] == 'X' && i == 2 && j > 1){
                    c3++;
                }else if(a[i][j] == 'X' && i == 3 && j > 2){
                    c4++;
                }else if(a[i][j] == 'X' && i == 4 && j > 3){
                    c5++;
                }else if(a[i][j] == 'X' && (i == 0 || i == 1 ||i == 2 || i == 3 || i == 4) && j == 0){
                    c1++;
                }else if(a[i][j] == 'X' && (i == 1 || i == 2 || i == 3 || i == 4) && j==1){
                    c2++;
                }else if(a[i][j] == 'X' && (i == 2 || i == 3 || i == 4) && j == 2){
                    c3++;
                }else if(a[i][j] == 'X' && (i == 3 || i == 4) && j == 3){
                    c4++;
                }  
            }
        }
        for(i = 5; i<10; i++){
            for(j = 5; j<10; j++){
                if(a[i][j] == 'X' && i == 9){
                    c1++;
                }else if(a[i][j] == 'X' && i == 8 && j < 9){
                    c2++;
                }else if(a[i][j] == 'X' && i == 7 && j < 8){
                    c3++;
                }else if(a[i][j] == 'X' && i == 6 && j < 7){
                    c4++;
                }else if(a[i][j] == 'X' && i == 5 && j < 6){
                    c5++;
                }else if(a[i][j] == 'X' && (i == 5 || i == 6 ||i == 7 || i == 8 || i == 9) && j == 9){
                    c1++;
                }else if(a[i][j] == 'X' && (i == 5 || i == 6 || i == 7 || i == 8) && j == 8){
                    c2++;
                }else if(a[i][j] == 'X' && (i == 5 || i == 6 || i == 7) && j == 7){
                    c3++;
                }else if(a[i][j] == 'X' && (i == 5 || i == 6) && j == 6){
                    c4++;
                }  
            }
        }
        for(i = 5; i<10; i++){
            for(j = 0; j < 5; j++){
                if(a[i][j] == 'X' && i == 9){
                    c1++;
                }else if(a[i][j] == 'X' && i == 8 && j > 0){
                    c2++;
                }else if(a[i][j] == 'X' && i == 7 && j > 1){
                    c3++;
                }else if(a[i][j] == 'X' && i == 6 && j > 2){
                    c4++;
                }else if(a[i][j] == 'X' && i == 5 && j > 3){
                    c5++;
                }else if(a[i][j] == 'X' && (i == 5 || i == 6 ||i == 7 || i == 8) && j == 0){
                    c1++;
                }else if(a[i][j] == 'X' && (i == 5 || i == 6 || i == 7 || i == 8) && j==1){
                    c2++;
                }else if(a[i][j] == 'X' && (i == 5 || i == 6 || i == 7) && j == 2){
                    c3++;
                }else if(a[i][j] == 'X' && (i == 5 || i == 6) && j == 3){
                    c4++;
                }  
            }
        }
        
        for(i = 0; i<5; i++){
            for(j = 5; j<10; j++){
                if(a[i][j] == 'X' && i == 0){
                    c1++;
                }else if(a[i][j] == 'X' && i == 1 && j < 9){
                    c2++;
                }else if(a[i][j] == 'X' && i == 2 && j < 8){
                    c3++;
                }else if(a[i][j] == 'X' && i == 3 && j < 7){
                    c4++;
                }else if(a[i][j] == 'X' && i == 4 && j < 6){
                    c5++;
                }else if(a[i][j] == 'X' && (i == 1 || i == 2 ||i == 3 || i == 4) && j == 9){
                    c1++;
                }else if(a[i][j] == 'X' && (i == 1 || i == 2 || i == 3 || i == 4) && j == 8){
                    c2++;
                }else if(a[i][j] == 'X' && (i == 2 || i == 3 || i == 4) && j == 7){
                    c3++;
                }else if(a[i][j] == 'X' && (i == 3 || i == 4) && j == 6){
                    c4++;
                }  
            }
        }
        printf("%d\n", (c1 * 1) + (c2 * 2) + (c3 * 3) + (c4 * 4) + (c5 * 5));
    }
    return 0;
}
