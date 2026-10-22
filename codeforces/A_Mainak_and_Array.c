#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,j,max = 0,large = -100000,small = 10000,smallest_index = 1,largest_index = 1;
        scanf("%d",&n);
        int a[n];
        for(i = 0; i<n; i++){
            scanf("%d",&a[i]);
        }
        for(i = 0; i<n; i++){
            if((i > 0) && (a[0] > a[i]) && (smallest_index == 1)){
                smallest_index = 0; 
            }
            if((i < n-1) && (a[n-1] < a[i]) && (largest_index == 1)){
                largest_index = 0; 
            }
            if(a[i] > large){
                large = a[i];
            }
            if(a[i] < small){
                small = a[i];
            }
        }
        

        if(smallest_index == 1){
            printf("%d\n",(large - a[0]));
            
        }else if(largest_index == 1){
            printf("%d\n",(a[n-1] - small));
            
        }else{
            for(i = 0; i<n; i++){
                if((i!= n - 1) && (a[i] - a[i+1] > max)){
                    max = a[i] - a[i+1];
                }else if((i == n - 1) && (a[i] - a[0] > max)) {
                    max = a[i] - a[0];
                }
            }
            if((large - a[0]) > max){
                max = large - a[0];
            }
            if((a[n-1] - small) > max){
                max = a[n-1] - small;
            }
                
            printf("%d\n",max);
            
        }
    }
    return 0;
}