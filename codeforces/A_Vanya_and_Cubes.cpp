#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int height = 0;
    int totalCubes = 0;
    int level = 1;

    while (true) {
        int cubesForThisLevel = level * (level + 1) / 2;
        if (totalCubes + cubesForThisLevel > n) {
            break;
        }
        totalCubes += cubesForThisLevel;
        height++;
        level++;
    }

    cout << height << endl;
    return 0;
}
