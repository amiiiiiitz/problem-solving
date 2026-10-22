#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int max;
    if(a>b && a>c && a>d){
        max = a;
    }else if(b>a && b>c && b>d){
        max = b;
    }else if(c>a && c>b && c>d){
        max = c;
    }else{
        max = d;
    }
    if(max == a){
        printf("%d %d %d\n",max - b,max-c,max-d); 
    }else if(max == b){
        printf("%d %d %d\n",max - a,max-c,max-d); 
    }else if(max == c){
        printf("%d %d %d\n",max - b,max-a,max-d); 
    }else{ 
        printf("%d %d %d\n",max - b,max-c,max-a); 
        
    }
    
    return 0;
}