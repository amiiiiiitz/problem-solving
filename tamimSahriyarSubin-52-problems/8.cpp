#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    int i = 0;
    while(t){
        i++;
        int a,b,c;
        cin >> a >> b >> c;
        cout << "Case" << " " << i << ":" << " "; 
        if(a<b && a<c && b<c){
            cout << a <<" "<< b <<" " << c << endl;
        }else if(a<b && a<c && c<b){
            cout << a <<" "<< c <<" " << b << endl;
        }else if(b<a && b<c && a<c){
            cout << b <<" "<< a <<" " << c << endl;
        }else if(b<a && b<c && c<a){
            cout << b <<" "<< c <<" " << a << endl;
        }else if(c<a && c<b && a<b){
            cout << c <<" "<< a <<" " << b << endl;
        }else{
            cout << c <<" "<< b <<" " << a << endl;
        }
        t--;
    }
    return 0;
}