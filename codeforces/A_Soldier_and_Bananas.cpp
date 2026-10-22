#include<iostream>
using namespace std;
int main()
{
    long long k,n,w;
    cin >> k >> n >> w;
    long long i,sum = 0;
    
    for(i = 1; i<=w; i++)
    {
        sum = sum + (i*k);
    }
    long long ans = sum - n;
    if(ans > 0){
        cout << ans << endl;
    }else{
        cout << 0 << endl;
    }
    
    return 0;
}