#include<iostream>
#include<cmath>
using namespace std;
int main() {        
    double a,b;
    cin >> a >> b; 
    int r,f,c;
    r = round(a / b);
    f = floor (a / b);
    c = ceil(a / b);
    cout <<"floor "<<a<<" / "<<b<<" = "<< f << endl;
    cout <<"ceil "<<a<<" / "<<b<<" = "<< c << endl;
    cout <<"round "<<a<<" / "<<b<<" = "<< r << endl;
    return 0;
}