#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long n,x,i,max_sum = 0, min_sum = 0;
        cin >> n >> x;
        long long a[n];
        for(i = 0; i<n; i++){
            cin >> a[i];
            if(a[i] % x == 0){
                max_sum = max_sum + (a[i]/x);
            }else{
                max_sum = max_sum + (a[i]/x) + 1;
            }
            min_sum += a[i];
            
        }
        if(min_sum % x == 0){
            cout << min_sum/x << " " << max_sum << endl;   
        }else{
            cout << (min_sum/x)+1 << " " << max_sum << endl;  
        }
        

    }
    return 0;
}