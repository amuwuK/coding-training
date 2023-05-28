#include <iostream>
using namespace std;

int main(){
    int const qnt = 3;
    int a, x[qnt], y[qnt], z[qnt], i, k, j, l = 0;
    bool same;

    do{
        for ( i = 0; i < qnt; i++ ){
            cout << "\nInsert a value for X[" << i << "]: ";
            cin >> x[i];
            cout << "\nInsert a value for Y[" << i << "]: ";
            cin >> y[i];
        }

        for ( i = 0; i < qnt; i++ ){
            for ( j = 0; j < qnt; j++ ){
                if ( x[i] == y[j] ){
                    same = 0;
                    for ( k = 0; k < l; k++ ){
                        if ( x[i] == z[k] ){
                            same = 1;
                        }
                    }
                    if (!same){
                        z[l] = x[i];
                        l++;
                    }
                }
            }
        }
        cout << "\nVector X: ";
        for ( i = 0; i < qnt; i++ ){
            cout << x[i] << " ";
        }
        cout << "\nVector Y: ";
        for ( i = 0; i < qnt; i++ ){
            cout << y[i] << " ";
        }
        cout << "\nVector Z, which contains the common values between X and Y, has: ";
        

        for ( i = 0; i < l; i++ ){
            cout << z[i] << " ";
        }
        
        do{
        cout << "\nWanna do it again? [ 1 - Yes / 0 - No ] ";
        cin >> a;
        } while ( a != 0 && a != 1 );
    } while (a == 1);
}