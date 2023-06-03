#include <iostream>
using namespace std;

int main (){
    int code, i, x[20], a;

    do {
        for ( i = 0; i < 20; i++ ){
            cout << "\nInsert a number for the vector's case " << i + 1 << ": ";
            cin >> x[i];
        }

        cout << "\nDo you wanna see the vector's numbers in:\n1- Normal\n2- Reverse\n";
        cin >> code;
        cout << endl;

        switch ( code ){
            case 1:
                for ( i = 0; i < 20; i++ ){
                    cout << x[i] << " ";
                }
                break;

            case 2:
                for ( i = 19; i > 0; i-- ){
                    cout << x[i] << " ";
                }
        }
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            cin >> a;
        } while ( a != 0 && a != 1 );
    } while (a == 1); 
}