#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    ll t;
    cin >> t;
    while(t--)
    {
        string s;
        cin>>s;
        ll n=s.length();
        ll c=0,m=0,f=0;
        for(ll i=0;i<2*n-1;i++)
        {
            if(s[i%n]=='1') {c++;m=max(m,c);}
            else{
                c=0;
            }
        }
        if(m>n) cout<<n*n<<endl;
        else cout<<((m+1)/2)*((m+2)/2)<<endl;
    }
    return 0;
}