#include <iostream>
using namespace std;

int main(){
    float x[4][5], v[5];
    int a, i, j, k;

    do{
        k = 0;
        system ("cls");
        for ( i = 0; i < 5; i++ ){
            v[i] = 0;
        } 
        for ( i=0; i < 4; i++ ){
            for ( j=0; j < 5; j++ ){
                cout << "\nInsert a value for X[" << i << "][" << j << "]: ";
                cin >> x[i][j];
                v[k++] += x[i][j];
            }
            k = 0;
        }

        cout << "\nX[" << 4 << "][" << 5 << "]\n";
        for ( i = 0; i < 4; i++ ){
            for ( j = 0; j < 5; j++ ){
                cout << x[i][j] << "\t";
            }
            cout << "\n";
        }

        cout << "\nVector V[" << 5 << "] containing the summ of every column: ";
        for ( i = 0; i < 5; i++ ){
            cout << v[i];
            if ( i != 4 ){
                cout << ", ";
            }
        } 


        
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            cin >> a;
        } while ( a != 0 && a != 1 );
    } while (a == 1);
}