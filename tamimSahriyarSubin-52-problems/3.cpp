#include<iostream>
using namespace std;
int main(){
    int i = 1000;
    for(; i>0;){
        for(int j = 1; j<6; j++){
            cout << i << '\t';
            i--;
    }
    cout << endl;
    }
    return 0;
}