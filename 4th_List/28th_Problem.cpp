#include <iostream>
using namespace std;

int main(){
    int const qnt = 5;
    int a, i, x[qnt], value;

    do{
        for ( i = 0; i < qnt; i++ ){
            cout << "\nInsert a value for X[" << i << "]: ";
            cin >> x[i];
        }
        for ( i = 1; i < qnt; i++ ){
            if ( x[i] > x[i-1] ){
                value = x[i];
                x[i] = x[i-1];
                x[i-1] = value;
                i = 0;
            }
        }

        cout << "\nX[" << qnt << "] in decrescent order: ";
        for ( i = 0; i < qnt; i++ ){
            cout << x[i] << " ";
        }
        
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            cin >> a;
        } while ( a != 0 && a != 1 );
    } while (a == 1);
}