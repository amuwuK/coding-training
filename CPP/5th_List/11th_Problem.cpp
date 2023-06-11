#include <iostream>
using namespace std;

int main(){
    int a, i, j, iBiggest, jBiggest, biggest, smallest, iSmallest, jSmallest, m, n;

    do{
        system ("cls");
        cout << "\nInsert the values for X rows and collumns.\nRows: ";
        cin >> m;
        cout << "\nCollumns: ";
        cin >> n;

        int x[m][n];
        
        for ( i=0; i < m; i++ ){
            for ( j=0; j < n; j++ ){
                cout << "\nInsert a value for X[" << i << "][" << j << "]: ";
                cin >> x[i][j];
                if ( ( i == j ) && ( i == 0 ) ){
                    biggest = smallest = x[0][0];
                    iBiggest = iSmallest = jSmallest = jBiggest = i;
                }
                if ( x[i][j] > biggest ){
                    iBiggest = i;
                    jBiggest = j;
                    biggest = x[i][j];
                }
                if ( x[i][j] < smallest ){
                    iSmallest = i;
                    jSmallest = j;
                    smallest = x[i][j];
                }
            }
        }
        system ("cls");

        cout << "\nRow of the smallest number (" << smallest << "): " << iSmallest;
        cout << "\nCollumn of the smallest number (" << smallest << "): " << jSmallest;
        cout << "\nRow of the biggest number (" << biggest << "): " << iBiggest;
        cout << "\nCollumn of the biggest number (" << biggest << "): " << jBiggest;

        
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            cin >> a;
        } while ( a != 0 && a != 1 );
    } while (a == 1);
}