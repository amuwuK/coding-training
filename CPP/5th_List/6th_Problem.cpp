#include <iostream>
using namespace std;

int main(){
    int const qnt = 5;
    int a, x[qnt][qnt], i, j, n, k, hold;

    do{
        k = qnt - 1;
        n = 0;
        
        for ( i=0; i < qnt; i++ ){
            for ( j=0; j < qnt; j++ ){
                cout << "\nInsert a value for X[" << i << "][" << j << "]: ";
                cin >> x[i][j];
            }
        }

        cout << "\nX[" << qnt << "][" << qnt << "]\n";
        for ( i = 0; i < qnt; i++ ){
            for ( j = 0; j < qnt; j++ ){
                cout << x[i][j] << "\t";
            }
            cout << "\n";
        }

        for ( i=0; i < qnt; i++ ){
            for ( j=0; j < qnt; j++ ){
                if ( i == j ){
                    hold = x[i][j];
                    x[i][j] = x[i][k];
                    x[i][k--] = hold;
                }
                if ( i == 4 ){
                    hold = x[i][j];
                    x[i][j] = x[n][qnt-1];
                    x[n++][qnt-1] = hold;
                }
            }
        }

        cout << "\nX[" << qnt << "][" << qnt << "] modified\n";
        for ( i = 0; i < qnt; i++ ){
            for ( j = 0; j < qnt; j++ ){
                cout << x[i][j] << "\t";
            }
            cout << "\n";
        }


        
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            cin >> a;
        } while ( a != 0 && a != 1 );
    } while (a == 1);
}