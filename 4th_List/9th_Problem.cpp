#include <iostream>
using namespace std;

int main(){
    int const qnt = 5;
    int a, x[qnt], y[qnt], i, k = 0;

    do{
        for ( i = 0; i < qnt; i++ ){
            cout << "\nInsert a value for X["<< i << "]";
            cin >> x[i];
        }
        for ( i = 0; i < qnt; i++ ){
            if ( x[i] % 2 == 0 ){
                y[k] = i;
                k++;
            }
        }
        cout << "\nVector Y, which contains the index of even numbers in X, has: ";
        for ( i = 0; i < k; i++ ){
            cout << y[i] << " ";
        }

        do{
        cout << "\nWanna do it again? [ 1 - Yes / 0 - No ] ";
        cin >> a;
        } while ( a != 0 && a != 1 );
    } while (a == 1);
}