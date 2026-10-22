#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
     cin>>t;
     while(t--){
          int n; cin >> n;
          string s; cin >> s;
          int cnt = count(s.begin(),s.end(),'0');

          if(cnt%2==0 || cnt==1) cout << "BOB" << endl;
          else cout << "ALICE" << endl;
     }
}