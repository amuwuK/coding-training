#include <iostream>
using namespace std;

int main(){
    int const qnt = 5;
    int a, b[qnt], c[qnt], i, j, same, k;

    do{
        k = 0;
        for ( i = 0; i < qnt; i++ ){
            cout << "\nInsert a value for B[" << i << "]: ";
            cin >> b[i];
        }

        for ( i = 0; i < qnt; i++ ){
            same = 0;
            for ( j = 0; j < qnt; j++ ){
                if ( b[i] == b[j] ){
                    same++;
                }
            }
            if ( same == 1 ){
                c[k] = b[i];
                k++;
                b[i] = -1;
            }
        }

        cout << "\nNew B[" << qnt << "]: ";
        for ( i = 0; i < qnt; i++ ){
            cout << b[i] << " ";
        }

        cout << "\nVector C[" << k-1 << "]: ";
        for ( i = 0; i < k; i++ ){
            cout << c[i] << " ";
        }
        
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            cin >> a;
        } while ( a != 0 && a != 1 );
    } while (a == 1);
}