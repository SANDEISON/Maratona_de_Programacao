#include <iostream>
#include<string>
using namespace std;

int main ( )
{
    int n=1, cont = 1;

    while(1){
        cin >> n;
        if (n == 0){
            break;
        }else{

            int h[n], total=0, soma=0;


            for(int i = 0; i < n;i++){
                cin >> h[i];
                total+=h[i];

            }

            total/=n;
            for(int i = 0; i < n;i++){
               if(h[i]>total){
                   soma+= (h[i]-total);
               }
            }
            cout << "Set #"<< cont << endl;
            cout << "The minimum number of moves is " <<soma<<"."<<endl << endl;
            cont++;
        }
    }
    return 0 ;
}
