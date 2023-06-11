#include <iostream>
using namespace std;

int main(){
    int const qnt = 3;
    int a, x[qnt][qnt], i, j, aux;

    do{
        system ("cls");
        cout << "\nYou can only put even numbers on even rows and odd numbers on odd rows.";
        for ( i=0; i < qnt; i++ ){
            for ( j=0; j < qnt; j++ ){
                do{
                    cout << "\nInsert a value for X[" << i << "][" << j << "]: ";
                    cin >> aux;
                } while ( ( ( i % 2 != 0) && ( aux % 2 == 0 ) ) || ( ( i % 2 == 0) && ( aux % 2 != 0 ) ) );
                x[i][j] = aux;
            }
        }

        cout << "\nMatrix X[" << qnt << "][" << qnt << "]\n";
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