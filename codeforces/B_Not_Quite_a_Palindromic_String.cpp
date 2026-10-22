#include<iostream>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while(t--){
        long long n,k,i,count_1  =0,count_0 = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        for(i = 0 ; i<n; i++){
            if(s[i] == '0'){
                count_0++;
            }else{
                count_1++;
            }
        }
        long long un_pair = (n - 2*k)/2;
        if(count_0 >= un_pair  && count_1 >= un_pair  && (count_0 - un_pair ) % 2 == 0 && (count_1 - un_pair ) % 2 == 0){
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }
    }
}