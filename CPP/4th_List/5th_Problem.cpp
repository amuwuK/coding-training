#include <iostream>
using namespace std;

int main(){
    int x[20], y[20], i, o, a;
    o = 19;

    do{
        for ( i = 0; i < 20; i++ ){
            cout << "\nInsert a number for the vector's case " << i + 1 << ": ";
            cin >> x[i];
        }
        cout << "\nThe vector you created: ";
        for ( i = 0; i < 20; i++ ){
            y[i] = x[o];
            o--;
            }
        for ( i = 0; i < 20; i++ ){
            cout << x[i] << " ";
        }
        cout << "\nThe vector you created, but backwards: ";
        for ( i = 0; i < 20; i++ ){
            cout << y[i] << " ";
        }
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            cin >> a;
        } while ( a != 0 && a != 1 );
    } while (a == 1);
}