// #include<iostream>
// #include<map>
// #include<string>
// using namespace std;
// int main() {
//     int t;
//     cin >> t;
//     while(t--) {
//         long long n;
//         cin >> n ;

//         string s;
//         cin >> s;

//         map<char, int> freq;
//         map<char, int> freq2;
        
        
//         long long count = 0;
//         bool splited = false;
//         for(auto val : s) {
//             if(splited == false) freq[val]++;
//             else {
//                 freq2[val]++;
//                 if(freq2[val] == 1) count++;
//             }
//             if(freq[val] == 1 && splited == false) {
//                 count++;
//             }else if(splited == false){
//                 splited = true; 
//                 freq2[val]++; 
//                 count++;
//             }  
            
//         }
       
//         cout << count << endl;
//     }
//     return 0;
// }


#include<iostream>
#include<unordered_set>
#include<vector>
#include<string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n,i;
        cin >> n ;

        string s;
        cin >> s;

        unordered_set<char> st;
        vector<long long> pre(n+1,0);
        vector<long long> suf(n+1,0);

        for(i = 1; i<=n; i++) {
            st.insert(s[i-1]);
            pre[i] = st.size();
        }
        
        st.clear();

        for(i = n; i>=1; i--) {
            st.insert(s[i-1]);
            suf[i] = st.size();
        }
        
        long long ans = 0;
        for(i = 0; i<n; i++) ans = max(ans, pre[i] + suf[i+1]);

        cout << ans << endl;
    }
    return 0;
}