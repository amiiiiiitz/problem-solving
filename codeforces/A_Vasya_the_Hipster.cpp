#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int fashionable = min(a, b);
    int remaining = max(a, b) - fashionable;
    int sameSock = remaining / 2;

    cout << fashionable << " " << sameSock << "\n";
    return 0;
}
