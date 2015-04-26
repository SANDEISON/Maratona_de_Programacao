#include <iostream>

using namespace std;

int main ( )
{
    int s=0,cont = 1;

    while (s >= 0){
        int soma = 0, probCriado[12], probNecessario[12];
        cin >> s;

        if ((s < 0) or (s > 100)){
            break;
        }

        for(int i=0; i < 12; i++){
            cin>>probCriado[i];
        }

        for(int i=0; i < 12; i++){
            cin>>probNecessario[i];
        }

        cout << "Case "<< cont <<":" <<endl;


        for(int i=0; i < 12; i++){
            if(i>0){
                soma = probCriado[i-1]+ probCriado[i];

            }else{
               soma = s+probCriado[0];
            }
            soma -= probNecessario[i];
            if (soma>=0){
                cout<<"No problem! :D"<<endl;
            }else{
                cout<<"No problem. :("<<endl;
            }

        }
        cont++;

    }



    return 0 ;
}
