#include <iostream>
using namespace std;

int main(){
    int number, cont, result;
    bool again = 0;

    cout << "\nThere's numbers like 3025 that has a peculiar caracteristic. 30 + 25 = 55 and 55 * 55 = 3025.\n";

    do{
        do{
            cout << "\nType in a 4-digit number to see if it has the same property: ";
            cin >> number;
        } while ( number < 1000 && number > 9999 );

        result = ( number / 100 ) + ( number % 100 );
        result *= result;

        cout << endl << number;

        if ( result == number ){
            cout << " has that property!";
        } else {
            cout << " doesn't have that property.";
        }

        cout << "\nWanna try another number? [ 1 - Y / 0 - N ] ";
        cin >> again;

    } while ( again );
}