#include <iostream>
using namespace std;

int main(){
    int number, i;
    bool op;

    do {
        do{
            cout << "\nType in a number: ";
            cin >> number;
        } while ( number <= 0 );

        cout << "\nDivisors of " << number << ": ";

        i = 1;
        while ( i <= number ){
            if ( number % i == 0 ){
                cout << i << ", ";
            }
            i++;
        }

        cout << "\n\nWant to try another number? [ 1-Yes / 0-No ] ";
        cin >> op;
    } while (op);

    cout << "\n\tEND OF PROGRAM.";
}