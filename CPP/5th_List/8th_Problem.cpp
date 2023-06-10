#include <iostream>
using namespace std;

int main(){
    int const qnt = 5;
    int a, x[qnt][qnt], i, j, minimax, biggest, k, mmI, mmJ;

    do{
        for ( i=0; i < qnt; i++ ){
            for ( j=0; j < qnt; j++ ){
                cout << "\nInsert a value for X[" << i << "][" << j << "]: ";
                cin >> x[i][j];
            }
        }
        biggest = x[0][0];

        for ( i = 0; i < qnt; i++ ){
            for ( j = 0; j < qnt; j++ ){
                if ( x[i][j] > biggest ){
                    biggest = x[i][j];
                    minimax = x[i][j];
                    for ( k = 0; k < qnt; k++ ){
                        if ( x[i][k] < minimax ){
                            minimax = x[i][k];
                            mmI = i;
                            mmJ = k;
                        }
                    }
                }
            }
        }

        cout << "\nMatrix X[" << qnt << "][" << qnt << "]\n";
        for ( i=0; i < qnt; i++ ){
            for ( j=0; j < qnt; j++ ){
                cout << x[i][j] << "\t" ;
            }
            cout << "\n";
        }

        cout << "\nMinimax: " << minimax << "\nMinimax position: " << mmI << ", " << mmJ;



        
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            cin >> a;
        } while ( a != 0 && a != 1 );
    } while (a == 1);
}