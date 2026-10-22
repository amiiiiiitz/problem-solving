#include<stdio.h>
int main()
{
    int n,k,l,c,d,p,nl,np;
    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
    // each friend needs nl milliliters drink, a slice of lime and np grams of salt.
    int t = (k*l) / nl;
    int slice = (c*d);
    int salt = p / np;
    int min;
    if(t<slice && t<salt){
        min = t;
    }else if(slice < t && slice < salt){
        min = slice;
    }else{
        min = salt;
    }
    printf("%d\n",min / n);
}