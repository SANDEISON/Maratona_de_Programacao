#include <iostream>

using namespace std;

int main()
{
    int k = 1 , n, m, x, y;

    while (1){
        cin >> k;
        if (k ==0){
            break;
        }

        cin >> n >> m;

        for(int i = 0; i< k; i++){
            cin >> x >> y;
            if ((x == n) or (y == m)){
                cout<< "divisa"<< endl;
            }else{
                if ((x > n) and (y > m)){
                    cout<< "NE"<< endl;
                }else{
                    if ((x < n) and (y > m)){
                        cout<< "NO"<< endl;
                    }else{
                        if ((x < n) and (y < m)){
                            cout<< "SO"<< endl;
                        }else{
                            if ((x > n) and (y < m)){
                                cout<< "SE"<< endl;
                            }
                        }

                    }


                }


            }

        }
    }
    return 0;
}

