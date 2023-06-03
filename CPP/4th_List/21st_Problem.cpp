#include <iostream>
using namespace std;

int main(){
    int const qnt = 30;
    int a, x[qnt], i, j, k, divisors;

    do{
        cout << "\n\n\t\tMain menu\n\n1 - Fibonacci Sequence\n2 - Triangular Numbers\n3 - Prime Numbers\n4 - Quadrangular Numbers\n5 - Divisible by 3 and 5 simultaneously\n6 - Exit\n\nType a code to see the first 30 numbers of the mentioned type: ";
        cin >> a;

        switch ( a ){
            case 1:
                system ("cls");
                x[0] = 1;
                x[1] = 2;
                cout << "\nFirst 30 numbers of Fibonacci Sequence: " << x[0] << " " << x[1] << " ";
                for ( i = 2; i < qnt; i++ ){
                    x[i] = x[i-2] + x[i-1];
                    cout << x[i] << " ";
                }
                break;
            case 2:
                system ("cls");
                x[0] = 1;
                cout << "\nFirst 30 triangular numbers: " << x[0] << " ";
                for ( i = 1; i < qnt; i++ ){
                    x[i] = x[i-1] + ( 2 * i );
                    cout << x[i] << " ";
                }
                break;
            case 3:
                system ("cls");
                j = 0;
                cout << "\nFirst 30 prime numbers: ";
                for ( i = 0; i < qnt; i++ ){
                    while ( x[i] != j ){
                        j++;
                        divisors = 0;
                        for ( k = 1; k <= j; k++ ){
                            if ( j % k == 0 ){
                                divisors++;
                            }
                        }                        
                        if ( divisors == 2 ){
                            x[i] = j;
                            cout << x[i] << " ";
                        }
                    }
                }
                break;
            case 4:
                system ("cls");
                cout << "\nFirst 30 quadrangular numbers: ";
                for (i = 1; i <= qnt; i++ ){
                    x[i] = i*i;
                    cout << x[i] << " ";
                }
                break;
            case 5:
                system ("cls");
                j = 1;
                cout << "\nFirst 30 numbers divisible by 3 and 5 simultaneously: ";
                for ( i = 0; i < qnt; i++ ){
                    while ( x[i] != j ){
                        j++;                       
                        if ( ( j % 3 == 0 ) && ( j % 5 == 0 )){
                            x[i] = j;
                            cout << x[i] << " ";
                        }
                    }
                }
                break;
            case 6:
                break;
            default: 
                cout << "\nInvalid number! Type another code.";
        }
    } while (a != 6);
    cout << "End of program.";
}