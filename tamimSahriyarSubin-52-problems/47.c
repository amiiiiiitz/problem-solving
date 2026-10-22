#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        // int n1,n2,i,j,k;
        // scanf("%d",&n1);
        // int a[n1];
        // for(i = 0; i<n1; i++){
        //     scanf("%d",&a[i]);
        // }
        // scanf("%d",&n2);
        // int b[n2];
        // for(i = 0; i<n2; i++){
        //     scanf("%d",&b[i]);
        // }
        // int c[n1+n2];
        int n1 =5,n2=4,i=0,j=0,k=0;
        int a[]={2,4,6,8,17};
        int b[]={7,10,11,17};
        int c[n1+n2];
        // i=0,j=0;
    //     else if(i>n1){
    //         c[k]=b[j];
    //         printf("i>n1 j= %d c[k] = %d\n",j,c[k]);
    //         j++;
    //         k++; 
    // }
        // else if(a[i]==b[j] && i == n1-1){
            //     c[k]=b[j];
            //     printf("i=j, j= %d c[k] = %d\n",j,c[k]);
            //     j++;
            //     k++; 
            // }else if(a[i]==b[j] && j == n2-1){
            //     c[k] = a[i];
            //     printf("i=j2,i= %d c[k] = %d\n",i,c[k]);
            //     k++;
            //     i++; 
            // }
        while(1){
            if(k+1>n1+n2){
                break;
            }else if(a[i]<b[j]){
                c[k] = a[i];
                printf("i= %d c[k] = %d\n",i,c[k]);
                k++;
                i++;
            }else{
                c[k] = b[j];
                printf("j= %d c[k] = %d\n",j,c[k]);
                k++;
                j++;
            }
        }
        printf("%d %d %d\n",i,j,k);
        for(i = 0; i<n1+n2; i++){
            printf("%d ",c[i]);
        }

    }
}