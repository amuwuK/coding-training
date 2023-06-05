#include <iostream>
using namespace std;

int main(){
    int const qnt = 2;
    int a, x[qnt][qnt+1], i, j, y[qnt][qnt+1], biggest;

    do{
        for ( i=0; i < qnt; i++ ){
            for ( j=0; j < qnt+1; j++ ){
                cout << "\nInsert a value for X[" << i << "][" << j << "]: ";
                cin >> x[i][j];
                if ( j == 0 ){
                    biggest = x[i][j];
                }
                if ( x[i][j] > biggest ){
                    biggest = x[i][j];
                }
                if ( j == qnt ){
                    for ( j = 0; j < qnt+1; j++ ){
                        y[i][j] = x[i][j] * biggest;
                    }
                }
            }
        }

        cout << "\nX[" << qnt << "][" << qnt+1 << "]\n";
        for ( i = 0; i < qnt; i++ ){
            for ( j = 0; j < qnt+1; j++ ){
                cout << x[i][j] << "\t";
            }
            cout << "\n";
        }

        cout << "\nY[" << qnt << "][" << qnt+1 << "]\n";
        for ( i = 0; i < qnt; i++ ){
            for ( j = 0; j < qnt+1; j++ ){
                cout << y[i][j] << "\t";
            }
            cout << "\n";
        }

        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            cin >> a;
        } while ( a != 0 && a != 1 );
    } while (a == 1);
}