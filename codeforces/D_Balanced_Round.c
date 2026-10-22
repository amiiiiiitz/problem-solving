// #include<stdio.h>
// int main()
// {
//     int t;
//     scanf("%d",&t);
//     while(t--)
//     {
//         long long int n,k,i,count = 0, max = 0;
//         scanf("%lld %lld",&n,&k);
//         long long a[n];
//         for(i=0;i<n;i++){
//             scanf("%lld",&a[i]);
//         }
//         for(i = 0; i<n ; i++){
//             for(int j = 0; j<n-i-1 ; j++){
//                 if(a[j]>a[j+1]){
//                     int temp = a[j];
//                     a[j] = a[j+1];
//                     a[j+1] = temp;
//                 }
                
//             }
//         }
//         for(i=1;i<n;i++){
//             if(a[i] - a[i-1] > k){
//                 count = 0;
//             }else{
//                 count++;
//             }
//             if(count > max){
//                 max = count;
//             }
//         }
//         printf("%d\n",n - (max + 1));
//     }
//     return 0;
// }
#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b) {
    long long int val1 = *(long long int*)a;
    long long int val2 = *(long long int*)b;
    if (val1 < val2) return -1;
    if (val1 > val2) return 1;
    return 0;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,k,i,count = 0, max = 0;
        scanf("%lld %lld",&n,&k);
        long long a[n];
        for(i=0;i<n;i++){
            scanf("%lld",&a[i]);
        }

        qsort(a, n, sizeof(long long), compare);

        for(i=1;i<n;i++){
            if(a[i] - a[i-1] > k){
                count = 0;
            }else{
                count++;
            }
            if(count > max){
                max = count;
            }
        }
        printf("%d\n",n - (max + 1));
    }
    return 0;
}
