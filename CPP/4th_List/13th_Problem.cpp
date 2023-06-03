#include <iostream>
using namespace std;

int main(){
    int a, n, x, i, swap = 0, b;
    bool found = 0;

    do{
        do{
            cout << "\nInsert a value for N: ";
            cin >> n;
        } while ( n < 0 );

        int v[n];
        v[0] = n;

        for ( i = 1; i < n; i++ ){
            v[i] = v[i-1] * 2;
        }
        do{
            do{
                cout << "\nInsert a number for X to be searched in V[N]: ";
                cin >> x;
            } while ( x < 0 );

            for ( i = 0; i < n; i++ ){
                if ( x == v[i] ){
                    swap = x;
                    x = v[0];
                    v[0] = swap;
                    found = 1;
                }
            }
            
            if ( found ){
                cout << endl << swap << " was found.\nNew V[" << n << "]: ";
                for ( i = 0; i < n; i++ ){
                    cout << v[i] << " ";
                }
                cout << "\nNew X: " << x;
            } else {
                cout << endl << x << " was not found.";
            }
            do{
                cout << "\nWanna search another number? [ 1 - Yes / 0 - No ]";
                cin >> b;
            } while ( b != 0 && b != 1 );
            found = 0;
            v[0] = x;
            x = swap;
        } while ( b == 1 );
        
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            cin >> a;
        } while ( a != 0 && a != 1 );
    } while (a == 1);
}