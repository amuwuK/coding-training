#include <iostream>
using namespace std;

int main(){
    int x[15], code, i, a;

    do{
        for ( i = 0; i < 15; i++ ){
            cout << "\nInsert a number for the vector's case " << i + 1 << ": ";
            cin >> x[i];
        }

        cout << "\nDo you wanna see numbers of the vector's index:\n1- Even\n2- Odd\n";
        cin >> code;
        cout << endl;

        switch ( code ){
            case 1:
                cout << "Vector's even index numbers: " << x[0] << " ";
                for ( i = 1; i < 15; i++ ){
                    if ( i % 2 == 0 )
                    cout << x[i] << " ";
                }
                break;
            case 2:
                cout << "Vector's odd index numbers: ";
                for ( i = 1; i < 15; i++ ){
                    if ( i % 2 != 0 )
                    cout << x[i] << " ";
                }
        }

        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            cin >> a;
        } while ( a != 0 && a != 1 );
    } while (a == 1);
}