#include <iostream>
using namespace std;

int main(){
    int const qnt = 10;
    int a, p, x, b[qnt], i, value, value2;

    do{
        for ( i = 0; i < qnt - 1; i++ ){
            cout << "\nInsert a value for B[" << i << "]: ";
            cin >> b[i];
        }
        do{
            cout << "\nInsert a value for P between 0 and "<< qnt-2 << ": ";
            cin >> p;
        } while ( p > qnt - 2 || p < 0 );
        cout << "\nInsert a value for X: ";
        cin >> x;

        value = b[p];
        b[p] = x;

        for ( i = p+1; i < qnt; i++ ){
            value2 = b[i];
            b[i] = value;
            value = value2;
        }

        cout << "\nNew B[" << qnt << "]: ";
        for ( i = 0; i < qnt; i++ ){
            cout << b[i] << " ";
        }

        
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            cin >> a;
        } while ( a != 0 && a != 1 );
    } while (a == 1);
}