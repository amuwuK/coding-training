#include <iostream>
using namespace std;

int main(){
    int const qnt = 5;
    bool found;
    int a, x[qnt*3][qnt], i, j, numbers[(qnt*3)*qnt], repeat[(qnt*3)*qnt], n, k, indexF;

    do{
        k = 0;
        for ( i=0; i < qnt*3; i++ ){
            for ( j=0; j < qnt; j++ ){
                found = 0;
                cout << "\nInsert a value for X[" << i << "][" << j << "]: ";
                cin >> x[i][j];
                for ( n = 0; n <= k; n++ ){
                    if ( ( x[i][j] == numbers[n] ) && ( !found ) ){
                        found = 1;
                        indexF = n;
                    }
                }
                if ( !found ){
                    numbers[k] = x[i][j];
                    repeat[k++] = 1;
                } else {
                    repeat[indexF]++;
                }
            }
        }

        cout << "X[" << qnt*3 << "][" << qnt << "]\n";
        for ( i = 0; i < qnt*3; i++ ){
            for ( j = 0; j < qnt; j++ ){
                cout << x[i][j] << "\t";
            }
            cout << "\n";
        }

        for ( i = 0; i < k; i++ ){
            cout << "\nThe number " << numbers[i] << " appeared " << repeat[i] << " time(s).";
        }
        
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            cin >> a;
        } while ( a != 0 && a != 1 );
    } while (a == 1);
}