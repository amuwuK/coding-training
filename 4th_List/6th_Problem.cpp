#include <iostream>
using namespace std;

int main(){
    int x[20], q, o, i, a;
    o = 19;
    
    do{
        for ( i = 0; i < 20; i++ ){
            cout << "\nInsert a number for the vector's case " << i + 1 << ": ";
            cin >> x[i];
        }

        for ( i = 0; i < 10; i++ ){
            q = x[i];
            x[i] = x[o];
            x[o] = q;
            o--;
            }

        cout << "\nThe vector you created, but backwards: ";
        for ( i = 0; i < 20; i++ ){
            cout << x[i] << " ";
        }
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            cin >> a;
        } while ( a != 0 && a != 1 );
    } while (a == 1);
}