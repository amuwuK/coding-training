#include <iostream>
using namespace std;

int main(){
    int const qnt = 5;
    int a, x[qnt][qnt], i, j, summR, summC, summMD, summSD, summA;

    do{
        summR = summC = summMD = summSD = summA = 0;
        for ( i=0; i < qnt; i++ ){
            for ( j=0; j < qnt; j++ ){
                cout << "\nInsert a value for X[" << i << "][" << j << "]: ";
                cin >> x[i][j];
                summA += x[i][j];
                if ( i == 4 ){
                    summR += x[i][j];
                }
                if ( j == 2 ){
                    summC += x[i][j];
                }
                if ( i == j ){
                    summMD += x[i][j];
                }
                if ( i + j == 4 ){
                    summSD += x[i][j];
                }
            }
        }

        cout << "\nMatrix X[" << qnt << "][" << j << "]\n";
        for ( i = 0; i < qnt; i++ ){
            for ( j = 0; j < qnt; j++ ){
                cout << x[i][j] << "\t";
            }
            cout << "\n";
        }

        cout << "\nRow 4 summ: " << summR;
        cout << "\nColumn 2 summ: " << summC;
        cout << "\nMain diagonal summ: " << summMD;
        cout << "\nSecondary diagonal summ: " << summSD;
        cout << "\nSumm of every element: " << summA;

        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            cin >> a;
        } while ( a != 0 && a != 1 );
    } while (a == 1);
}