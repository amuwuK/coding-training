#include <iostream>
using namespace std;

int main(){
    int const qnt = 2;
    int a, x[qnt][qnt], i, j, y[qnt][qnt], n;

    do{
        for ( i=0; i < qnt; i++ ){
            for ( j=0; j < qnt; j++ ){
                cout << "\nInsert a value for X[" << i << "][" << j << "]: ";
                cin >> x[i][j];
            }
        }

        cout << "\nInsert a value for N: ";
        cin >> n;

        for ( i = 0; i < qnt; i++ ){
            for ( j = 0; j < qnt; j++ ){
                if ( x[i][j] == n ){
                    y[i][j] = 0;
                } else {
                    y[i][j] = x[i][j];
                }
            }
        }

        cout << "\nX[" << qnt << "][" << qnt << "]:\n";
        for ( i=0; i < qnt; i++ ){
            for ( j=0; j < qnt; j++ ){
                cout <<  x[i][j] << " ";
            }
            cout << endl;
        }
        cout << "\nY[" << qnt << "][" << qnt << "]:\n";
        for ( i=0; i < qnt; i++ ){
            for ( j=0; j < qnt; j++ ){
                cout <<  y[i][j] << " ";
            }
            cout << endl;
        }
        
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            cin >> a;
        } while ( a != 0 && a != 1 );
    } while (a == 1);
}