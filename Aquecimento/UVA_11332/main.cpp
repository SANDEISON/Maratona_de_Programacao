#include <iostream>

using namespace std;


int verifica(int x){

    int ver = 0, soma = 0;

    while (x > 0) {

            ver = x % 10;
            soma += ver;
            x /= 10;
    }
    if (soma >= 10){
        soma = verifica(soma);
    }
   return soma;
}

int main()
{
    int n=1;
    while(1){
        cin >> n;
        if ( n ==0 ) {
            break;
        }else{
            cout <<verifica(n)<< endl;
        }
    }
    return 0;
}

