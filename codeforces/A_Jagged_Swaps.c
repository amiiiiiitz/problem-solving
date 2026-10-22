// #include<stdio.h>
// int main()
// {   
//     int t; // if there's no grnty that n will always start with 1
//     scanf("%d",&t);
//     while(t--){
//         int n,i,j,invalid=0,count = 1,same=0,max=0;
//         scanf("%d",&n);
//         int min = n + 2;
//         int p[n];
//         for(i=0;i<n;i++){
//             scanf("%d",&p[i]);
//             if(p[i]>n){
//                 invalid = p[i];
//             }
//             if(p[i]>max){
//                 max = p[i];
//             }
//             if(p[i]<min){
//                 min = p[i];
//             }
            
//         }
//         for(i=0;i<n;i++){
//             for(j=0; j<n;j++){
//                 if(p[i]==p[j] && j!=i){
//                     count++;
//                     break;
//                 }
//             }   
//         }
//         if(invalid != 0 || count != 1){
//             printf("NO\n");
//         }else if(p[0]==max || p[0]>min){
//             printf("NO\n");
//         }else{
//             printf("YES\n");
//         }

//     }
//     return 0;
// }
#include<stdio.h>
int main()
{   
    int t; // if there's grnty that n will always start with 1
    scanf("%d",&t);
    while(t--){
        int n,i;
        scanf("%d",&n);
       
        int p[n];
        for(i=0;i<n;i++){
            scanf("%d",&p[i]);    
        }
        
        if(p[0] == 1){
            printf("YES\n");
        }else{
            printf("NO\n");
        }

    }
    return 0;
}