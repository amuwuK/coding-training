#include <iostream>
using namespace std;

int main(){
    int const qnt = 10;
    int a, q[qnt], i;
    float p[qnt];

    do{
        for ( i = 0; i < qnt; i++ ){
            cout << "\nSold units of product "<< i << ": ";
            cin >> q[i];
            cout << "\nPrice of each unit: ";
            cin >> p[i];
        }

        for ( i = 0; i < qnt; i++ ){
            cout << "\nTotal value of "<< i << " sellings: $" << p[i] * q[i];
        }

        
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            cin >> a;
        } while ( a != 0 && a != 1 );
    } while (a == 1);
}