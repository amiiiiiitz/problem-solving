#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long n,m,k,i,j,sum = 0,count=0;
        cin >> n >> k;
        long long a[n*k];
        for(i = 0; i<n*k; i++){
            cin >> a[i];   
        }
        j = (n*k);
        m = n;
        if(n%2==0){
            n = n/2;
        }else{
            n = n/2 + 1;
        }
        m = m - n + 1;
        while(count<k)
        {
            j -= m;
            sum = sum + a[j];
            count++;
           
        }
        cout << sum << endl;

    }
    return 0;
}