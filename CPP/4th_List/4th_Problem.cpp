#include <iostream>
using namespace std;

int main(){
    int x[20], i, diff, index1, index2, a;

    diff = 0;

    do{
        for ( i = 0; i < 20; i++ ){
            cout << "\nInsert a number for the vector's case " << i + 1 << ": ";
            cin >> x[i];
        }

        for ( i = 0; i < 20; i++ ){
            if ( x[i] > x[i+1] && i + 1 != 20 ){
                if ( x[i] - x[i+1] > diff ){
                    diff = x[i] - x[i+1];
                    index1 = i;
                    index2 = i+1;
                }
                }
            if ( i + 1 == 20 ){
                if ( x[i] > x[0] ){
                    if ( x[i] - x[0] > diff ){
                    diff = x[i] - x[0];
                    index1 = i;
                    index2 = 0;
                }
                }
            }
            }
        cout << "\nBiggest difference between consecutive indexes: " << diff << "\nIndexes that form it: " << index1 << " and " << index2;
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            cin >> a;
        } while ( a != 0 && a != 1 );
    } while (a == 1);
}