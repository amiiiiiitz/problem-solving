#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long n,i;
        cin >> n ;
        long long a[n];
        for(i = 0; i<n; i++){
            cin >> a[i];   
        }
        int ans = 0;
        for(i = 1; i<n-1; i++){
            if((a[i]>a[i-1]) && (a[i] > a[i+1])){
                cout << "YES" << endl << i << " " << i+1 << " " << i+2 << endl;
                ans = 1;
                break;
            }
        }
        if(ans != 1) cout << "NO" << endl;
    }
    return 0;
}