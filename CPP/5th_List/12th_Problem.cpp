#include <iostream>
using namespace std;

int main(){
    int a, i, j, biggest, smallest, m, n, k;

    do{
        system ("cls");
        cout << "\nInsert the values for X rows and collumns.\nRows: ";
        cin >> m;
        cout << "\nCollumns: ";
        cin >> n;

        int x[m][n];
        
        for ( i=0; i < m; i++ ){
            for ( j=0; j < n; j++ ){
                cout << "\nInsert a value for X[" << i << "][" << j << "]: ";
                cin >> x[i][j];
                if ( ( i == j ) && ( i == 0 ) ){
                    biggest = smallest = x[0][0];
                }
                if ( x[i][j] < smallest ){
                    smallest = biggest = x[i][j];
                    for ( k = 0; k < n; k++ ){
                        if ( x[i][k] > biggest ){
                            biggest = x[i][k];
                        }
                    }
                }
            }
        }
        system ("cls");

        cout << "\nBiggest number of the row of the smallest (" << smallest << ") number : " << biggest;

        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            cin >> a;
        } while ( a != 0 && a != 1 );
    } while (a == 1);
}