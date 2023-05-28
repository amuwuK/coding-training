#include <iostream>
using namespace std;

int main(){
    int i, x[20];
    bool a;

    do{
        for ( i = 0; i < 20; i++ ){
            cout << "\nInsert a number for the vector's case " << i + 1 << ": ";
            cin >> x[i];
        }
        cout << "\nThe vector you created: ";
        for ( i = 0; i < 20; i++ ){
            cout << x[i] << " ";
            if ( x[i] % 2 == 0 ){
                x[i] = 0;
            }
        }
        cout << "\nSwaping the even numbers for 0: ";
        for ( i = 0; i < 20; i++ ){
            cout << x[i] << " ";
         }
        do{
        cout << "\nWanna do it again? [ 1 - Yes / 0 - No ] ";
        cin >> a;
        } while ( a != 0 && a != 1 );
    } while (a);
}