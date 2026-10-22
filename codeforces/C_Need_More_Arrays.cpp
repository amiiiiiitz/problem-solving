#include<iostream>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while(t--){
        long long n,i,count = 0,prev = INT_MIN;
        cin >> n;
        long long a[n];
        for(i = 0; i< n; i++){
            cin >> a[i];
            if(prev + 1 < a[i]){
                count++;
                prev = a[i];
            }
        }
             
        cout << count << endl;
    }
}