#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int r1, r2,B;
        scanf("%d %d %d", &r1,&r2,&B);
        
        double cu_rt = r2  / ((300 - B)/6.0);
        
        double re_rt = ((r1 + 1) - r2)  / (B/6.0)  ;
        
        printf("%.2lf %.2lf\n",cu_rt,re_rt);
       
    }
    return 0;
}