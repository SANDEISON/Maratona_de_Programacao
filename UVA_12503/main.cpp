#include <iostream>

using namespace std;

int main()
{
    int t = 0 , n = 0;

    string entrada;
    cin >> t;
    for (int i = 0; i< t; i++){
        cin >> n;
        int vetor[100], cont =0 , soma =0;
        for (int j = 0; j< n; j++){
            cin >> entrada;
            cout<< entrada.size()<<endl;

            if (entrada == "LEFT"){
                soma-=1;
                vetor[cont] = -1;
                cont+=1;

            }else{
                if (entrada == "RIGHT"){
                    soma+=1;
                    vetor[cont] = 1;
                    cont+=1;
                }else{
                  for(int k = 8; k < entrada.size();k++){


                      cout<< entrada[k]<<endl;

                  }



                }

          }

        }
        cout << soma<< endl;

    }


    return 0;
}

