#include <iostream>
using namespace std;

int main(){
    int const qnt = 3;
    int a, x[qnt][qnt], i, j, y[qnt][qnt];

    do{
        system ("cls");
        for ( i=0; i < qnt; i++ ){
            for ( j=0; j < qnt; j++ ){
                cout << "\nInsert a value for X[" << i << "][" << j << "]: ";
                cin >> x[i][j];
            }
        }

        for ( i = 0; i < qnt; i++ ){
            for ( j = 0; j < qnt; j++ ){
                y[j][i] = x[i][j];
            }
        }

        cout << "\nX[" << qnt << "][" << qnt << "]\n";
        for ( i=0; i < qnt; i++ ){
            for ( j=0; j < qnt; j++ ){
                cout << x[i][j] << "\t";
            }
            cout << "\n";
        }

        cout << "\nY[" << qnt << "][" << qnt << "]\n";
        for ( i=0; i < qnt; i++ ){
            for ( j=0; j < qnt; j++ ){
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