#include <iostream>
using namespace std;

int main (){
	int number, i = 0, a;

    do {

	    cout << "\nType-in a number: ";
	    cin >> number;

    } while ( number <= 0 );

	cout << "\nThe number is ";
	while ( i * i < number ){
        i++;
		if ( i * i == number ){
			cout << "quadrangular and the next 10 are: ";
			for ( a = 1; a < 11; a++ ){
				cout << ( i + a ) * ( i + a ) << ", ";
			} 
		} else if ( i * i > number ) {
			cout << "not quadrangular.";
		}
	}
}