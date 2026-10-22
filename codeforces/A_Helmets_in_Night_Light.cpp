#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n, p,i;
        cin >> n >> p;

        vector<long long> a(n), b(n);
        
        for (i = 0; i < n; i++) cin >> a[i] ;
        for (i = 0; i < n; i++) cin >> b[i];

        vector<pair<long long, long long>> paired(n);
        for (i = 0; i < n; i++) {
            paired[i] = {b[i], a[i]};
        }

        sort(paired.begin(), paired.end());

        long long cost = p , shared = 1;
        for(i = 0; i<n && paired[i].first < p; i++){
            shared += paired[i].second;
           
            if(shared <= n ){
                cost = cost + (paired[i].first * paired[i].second);
            }else{
               
                shared = n;
                break;
            }
        }
        
        cout <<  cost + ((n-shared) * p) << endl;
    }
    
    return 0;
}



    