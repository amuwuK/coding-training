#include <iostream>
using namespace std;

int main(){
    int const qnt = 10;
    int a, i, x[qnt], j, move;

    do{
        move = 0;
        for ( i = 0; i < qnt; i++ ){
            cout << "\nInsert a value for X[" << i << "]: ";
            cin >> x[i];
        }
        for ( i = 0; i < qnt; i++ ){
            if ( x[i] == 0 ){
                for ( j = i; j < qnt; j++ ){
                    x[j] = x[j+1];
                }
            move++;
            }
        }

        cout << "\nCompact X[" << qnt - move << "]: ";
        for ( i = 0; i < qnt - move; i++ ){
            cout << x[i] << " ";
        }
        
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            cin >> a;
        } while ( a != 0 && a != 1 );
    } while (a == 1);
}