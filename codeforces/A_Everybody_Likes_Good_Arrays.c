// #include<stdio.h>
// int main()
// {
//     int t;
//     scanf("%d",&t);
//     while(t--){
//         int n,i,j,k=0,even=0,odd = 0,c_ev_od = 1,operation = 0;
//         scanf("%d",&n);
//         int a[n];
//         for(i = 0; i<n; i++){
//             scanf("%d",&a[i]);
//             if(a[i] % 2 == 0 && c_ev_od == 1){
//                 even++;
//                 odd = 0;
//             }else if(a[i] % 2 != 0 && c_ev_od == 1){
//                 odd++;
//                 even = 0;
//             }
//             if(even == 2 || odd == 2){
//                 c_ev_od = 0;
//             }
//         }
//         if(c_ev_od == 0){
//             i = 0;
//             while(i<n-k-1){
//                 if((a[i] + a[i+1]) % 2 == 0){
//                     a[i] = a[i] * a[i+1];
//                     operation++;
//                     for(j=i+1;j<n-k-1;j++){
//                         a[j] = a[j+1];
//                     }
//                     k++;
//                 }else{
//                     i++;
//                 }   
            
//             }
//         }
//         printf("%d\n",operation);
        
//     }
    
//     return 0;
// }
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,operation = 0;;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<n-1;i++){
            if((a[i] % 2) == (a[i+1] % 2)){
                operation++;
            }
        }
        printf("%d\n",operation);
    }
}
