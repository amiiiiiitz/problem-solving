#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n,d; cin >> n >> d;
    int a[n], i,j, m=1, win = 0;

    for(i = 0; i<n; i++) cin >> a[i];

    sort(a, a+n);
    
    for(i = -1, j = n-1; i<j;) {
        if(m * a[j] > d) {
            win++;
            j--;
            m = 1;
        }
        else{
            m++;
            i++;
        } 
    }

    cout << win << endl;
    return 0;
}