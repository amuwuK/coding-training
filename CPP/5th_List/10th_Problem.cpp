#include <iostream>
using namespace std;

int main(){
    int const qnt = 5;
    int a, x[qnt][qnt], i, j, average;

    do{
        average = 0;
        system ("cls");
        for ( i=0; i < qnt; i++ ){
            for ( j=0; j < qnt; j++ ){
                cout << "\nInsert a value for X[" << i << "][" << j << "]: ";
                cin >> x[i][j];
            }
        }

        cout << "\nMatrix X[" << qnt << "][" << qnt << "]\n";
        for ( i = 0; i < qnt; i++ ){
            for ( j = 0; j < qnt; j++ ){
                cout << x[i][j] << "\t";
                if ( ( i == j ) && ( i != qnt - 1 ) ){
                    average += x[i+1][j];
                }
            }
            cout << "\n";
        }

        average /= ( qnt - 1 );

        cout << "\nAverage of every number below the main diagonal: " << average;

        
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            cin >> a;
        } while ( a != 0 && a != 1 );
    } while (a == 1);
}