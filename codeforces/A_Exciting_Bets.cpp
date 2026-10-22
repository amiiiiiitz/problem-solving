#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a,b,count;
        cin >> a >> b;
        
        if(a == 0)
        {
            cout << b <<" " << 0 << endl;
        }else if(b == 0)
        {
            cout << a <<" " << 0 << endl;
        }else
        {
            if(a>b)
            {
                count = a % (a - b);
                if(count == 0){
                    cout << a-b <<" " << 0 << endl;
                }else if((a - b) - count < (count)){
                    cout << a-b <<" " << (a-b) - count << endl;
                }else{
                    cout << a-b <<" " << count << endl;
                }
                
            }else if(a<b)
            {
                count = b % (b - a);
                if(count == 0){
                    cout << b-a <<" " <<  0 << endl;
                }else if((b - a) - count < (count)){
                    cout << b-a <<" " <<  (b-a) - count << endl;
                }else{
                    cout << b-a <<" " <<  count << endl;
                }
            }else
            {
                 cout << 0 <<" " << 0 << endl;
            }
        }   
        
    }
     
   return 0;
}