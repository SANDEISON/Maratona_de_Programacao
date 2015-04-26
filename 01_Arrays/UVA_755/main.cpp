#include <iostream>
#include<list>
#include <string>
#include<vector>

using namespace std;

int main ( )
{
    int n =0;




    cin >> n ;
    cout << endl;

    for (int i=0 ; i<n ; i++){

        int qtNumero=0, k=0, cont=0;
        string entrada;
        char numero[7];

        cin >> qtNumero ;

        for (int j=0; j<qtNumero; j++){


            cin >> entrada;
            k=entrada.size();
            for (int y=0 ; y < k ; y++){

                if ((entrada[y]!= '-') && (entrada[y]!= 'Q')and (entrada[y]!= 'Z')){

                  if (entrada[y]== 'A'||'B'||'C' ){
                        numero[cont]='2';
                   }else{
                       if (entrada[y]== 'D'||'E'||'F' ){
                            numero[cont]='3';
                       }else{
                           if (entrada[y]== 'G'||'H'||'I' ){
                                numero[cont]='4';
                           }else{
                               if (entrada[y]== 'J'||'K'||'L' ){
                                    numero[cont]='5';
                               }else{
                                   if (entrada[y]== 'M'||'N'||'O' ){
                                        numero[cont]='6';
                                   }else {
                                       if (entrada[y]== 'P'||'R'||'S' ){
                                            numero[cont]='7';
                                       }else {
                                           if (entrada[y]== 'T'||'U'||'V' ){
                                                numero[cont]='8';
                                           }else {
                                                numero[cont]='9';
                                           }
                                       }
                                   }

                               }

                           }
                       }

                    }



                  cont++;



                }

             }
           }
        }

    return 0 ;
}
