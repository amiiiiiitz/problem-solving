#include<iostream>
#include<string>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        long long i,l = s.size(),count_0 = 0,count_1 = 0;
        

        for(i = 0; i < l; i++){
            if(s[i] == '0'){
                count_0++;
            }else{
                count_1++;
            }
            
        }
        for(i = 0; i<l; i++){
            if(s[i] == '0'){
                count_1--;
            }else{
                count_0--;
            }
            if(count_0 < 0 || count_1 < 0){
                break;
            }
        }
        cout << l - i << endl;
    }
    return 0;
}