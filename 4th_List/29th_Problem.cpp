#include <iostream>
using namespace std;

int main(){
    int const qnt = 5;
    int a, x[qnt], i, errors, j;

    do{
        errors = 0;
        for ( i = 0; i < qnt; i++ ){
            cout << "\nEvery value must be different.";
            cout << "\nInser a value for X[" << i << "]: ";
            cin >> x[i];
            for ( j = 0; j < i; j++ ){
                if ( x[i] == x[j] ){
                    errors++;
                    cout << "\nRepeated number.";
                    i--;
                }
            }
        }

        cout << "\nVector X[" << qnt << "]: ";
        for ( i = 0; i < qnt; i++ ){
            cout << x[i] << " ";
        }
        cout << "\nNumber of errors made: " << errors;
        
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            cin >> a;
        } while ( a != 0 && a != 1 );
    } while (a == 1);
}