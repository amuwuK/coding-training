#include <iostream>
using namespace std;

int main(){
    int const qnt = 5;
    int a, x[qnt], y[qnt], z[qnt], i, summX = 0, summY = 0, acc = 0;

    do{
        for ( i = 0; i < qnt; i++ ){
            cout << "\nInsert a value for X["<< i << "]";
            cin >> x[i];
            cout << "\nInsert a value for Y["<< i << "]";
            cin >> y[i];
            summX += x[i];
            summY += y[i];
            z[i] = x[i] + y[i];
        }

        for ( i = 0; i < qnt; i++ ){
            if ( x[i] > summY ){
                acc++;
            }
        }

        cout << "\nSumm of every element in X: " << summX;
        cout << "\nSumm of every element in Y: " << summY;

        cout << "\n\nVector X: ";
        for ( i = 0; i < qnt; i++ ){
            cout << x[i] << " ";
        }
        cout << "\nVector Y: ";
        for ( i = 0; i < qnt; i++ ){
            cout << y[i] << " ";
        }
        cout << "\nVector Z, which contains the summ of elements in A and B with the same index: ";
        for ( i = 0; i < qnt; i++ ){
            cout << z[i] << " ";
        }


        cout << "\nTotal elements in X that are greater than the summ of Y: " << acc;


        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            cin >> a;
        } while ( a != 0 && a != 1 );
    } while (a == 1);
}