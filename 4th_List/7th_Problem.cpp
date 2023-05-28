#include <iostream>
using namespace std;

int main(){
    int v1[10], v2[10], v3[10], i, a;

    do{
        for ( i = 0; i < 10; i++ ){
            cout << "\nInsert a number for V1[" << i << "]: ";
            cin >> v1[i];
            cout << "\nInsert a number for V2[" << i << "]: ";
            cin >> v2[i];
        }
        cout << "\nV3, which is V1 values times v2 values, is: ";
        for ( i = 0; i < 10; i++ ){
            v3[i] = v1[i] * v2[i];
            cout << v3[i] << " ";
        }
        
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            cin >> a;
        } while ( a != 0 && a != 1 );
    } while (a == 1);
}