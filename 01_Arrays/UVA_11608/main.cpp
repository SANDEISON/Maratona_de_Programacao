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
        cout << "Case "<< cont <<":" <<endl;

        for(int i=0; i < 12; i++){
            cin>>probCriado[i];
        }

        for(int i=0; i < 12; i++){
            cin>>probNecessario[i];
        }

        soma=s;
        for(int i=0; i < 12; i++){
            if (soma>=probNecessario[i]){
                cout<<"No problem! :D"<<endl;
                soma-=probNecessario[i];
            }else{
                cout<<"No problem. :("<<endl;
            }
            soma += probCriado[i];
        }


        cont++;
    }



    return 0 ;
}
