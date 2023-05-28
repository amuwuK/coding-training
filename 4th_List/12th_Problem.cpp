#include <iostream>
using namespace std;

int main(){
    int const qnt = 5;
    int a, b = 0, x[qnt], i, foundIndex[qnt], search, k = 0;
    bool found = 0;

    do{
        for ( i = 0; i < qnt; i++){
            do{
            cout << "\nInsert a value for X[" << i << "]: ";
            cin >> x[i];
            } while ( x[i] < 0 );
        }

        do{
            cout << "\nNumber to be searched in the vector: ";
            cin >> search;

            for ( i = 0; i < qnt; i++ ){
                if ( search == x[i] ){
                    found = 1;
                    foundIndex[k] = i;
                    k++;
                }
            }
            if ( found ){
                cout << endl << search << " was found in the following index(es): ";
                for ( i = 0; i < k; i++ ){
                    cout << foundIndex[i] << " ";
                }
            } else {
                cout << endl << search << " not found.";
            }
            do{
                cout << "\nWanna search another number? [ 1 - Yes / 0 - No ]: ";
                cin >> b;
            } while ( b != 0 && b != 1 );
            k = 0;
        } while ( b == 1 );
        
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            cin >> a;
        } while ( a != 0 && a != 1 );
    } while (a == 1);
}