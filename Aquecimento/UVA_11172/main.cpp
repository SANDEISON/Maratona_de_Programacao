#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t, a, b;
    cin >> t;
    if (t<15){

        for (int i=0; i < t; i++){
            cin >> a >> b;
            a = fabs(a);
            b = fabs(b);
            cout<< a << endl;
            cout<< b << endl;
            if (a and b < 1000000001){
                if (a<b){
                    cout << "<" << endl;
                }else{
                    if (a > b){
                        cout << ">" << endl;
                    }else
                        cout << "=" << endl;
                    }
            }
        }
    }
    return 0;
}

