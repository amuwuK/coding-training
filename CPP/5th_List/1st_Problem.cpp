#include <iostream>
using namespace std;

int main(){
    int const qnt = 5;
    int a, x[qnt][qnt], i, j, v[qnt*qnt], n, k;

    do{
        k = 0;
        for ( i=0; i < qnt; i++ ){
            for ( j=0; j < qnt; j++ ){
                cout << "\nInsert a value for X[" << i << "][" << j << "]: ";
                cin >> x[i][j];
            }
        }

        cout << "\nInsert a value for N: ";
        cin >> n;

        cout << "\nVector V ( X["<<  qnt << "][" << qnt << "] * " << n << "): ";
        for ( i = 0; i < qnt; i++ ){
            for ( j = 0; j < qnt; j++ ){
                v[k] = x[i][j] * n;
                cout << v[k] << " ";
                k++;
            }
        }


        
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            cin >> a;
        } while ( a != 0 && a != 1 );
    } while (a == 1);
}