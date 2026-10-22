#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int a[3];
    for(int i = 0; i < 3; i++) cin >> a[i];

    sort(a, a + 3);
    
    int total_distance = a[2] - a[0];

    cout << total_distance << endl;

    return 0;
}
