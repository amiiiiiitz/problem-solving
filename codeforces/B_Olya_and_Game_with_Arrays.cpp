#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long n,sum = 0, s_min = INT_MAX, min = INT_MAX;
        cin >> n;
        while(n--){
            long long m;
            cin >> m;
            
            vector<long long> v(m);
            for(auto &it : v) cin >> it;
            sort(v.begin(),v.end());

            if(m>1){
                if(v[0]<min){
                    min = v[0];
                }
                if(v[1] < s_min){
                    s_min = v[1];
                }
                sum += v[1];
            }else{
                if(v[0]<min){
                    min = v[0];
                }
                if(v[0] < s_min){
                    s_min = v[0];
                }
                sum += v[0];
            }
            
            
        }

        sum = sum - s_min + min;
        cout << sum << endl;
    }
    
}


