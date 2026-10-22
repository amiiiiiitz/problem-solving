#include<iostream>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n,i,j,count_i = 0,count_j = 0;
        cin >> n;
        long long a[n];
        for(i = 0; i<n; i++){
            cin >> a[i];
        }
        for(i = 0; i<n; i++){
            for(j = 0; j<n-1; j++){
                if(a[j] > a[j+1]){
                    int tem = a[j];
                    a[j] = a[j+1];
                    a[j+1] = tem;
                }
            }
        }
        
        for(i = 0,j = n-1; i<n-1 && j>0;i++,j--){
            if((a[i] + a[n-1]) % 2 == 0){
                break;
            }else{
                count_i++;
            }
            if((a[j] + a[0]) % 2 == 0){
                break;
            }else{
                count_j++;
            }
        }
        if(count_i > count_j){
            cout << count_j << endl;
        }else{
            cout << count_i << endl;
        }
        

    }

}