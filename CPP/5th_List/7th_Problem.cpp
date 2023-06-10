#include <iostream>
using namespace std;

int main(){
    int const qnt = 6;
    int x[qnt][qnt], i, j;

        for ( i=0; i < qnt; i++ ){
            for ( j=0; j < qnt; j++ ){
                if ( ( i == 0 ) || ( j == 0 ) || ( i == 5 ) || ( j == 5 ) ){
                    x[i][j] = 1;
                } else if ( ( i == 1 ) || ( j == 1 ) || ( i == 4 ) || ( j == 4 ) ){
                    x[i][j] = 2;
                } else {
                    x[i][j] = 3;
                }

            }
        }

        cout << "\nMatrix X[" << qnt << "][" << qnt << "]\n";
        for ( i = 0; i < qnt; i++ ){
            for ( j = 0; j < qnt; j++ ){
                cout << x[i][j] << "\t";
            }
            cout << "\n";
        }
}