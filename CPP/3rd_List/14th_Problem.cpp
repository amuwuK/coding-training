#include <iostream>
using namespace std;

int main (){
    int op;
    float a, b, c;

    do{
        cout << "\n\n\t1- Triangle\n\t2- Square\n\t3- Rectangle\n\t4- Trapezoid\n\t5- Circle\n\t6- Exit\nChoose a figure to check their area or exit: ";
        cin >> op;

        switch ( op ){
            case 1:
                cout << "\nTriangle base: ";
                cin >> a;
                cout << "\nTriangle height: ";
                cin >> b;
                cout << "\nArea of the triangle: " << ( a * b ) / 2;
                break;
            
            case 2:
                cout << "\nSquare side: ";
                cin >> a;
                cout << "\nArea of the square: " << a * a;
                break;

            case 3:
                cout << "\nRectangle base: ";
                cin >> a;
                cout << "\nRectangle height: ";
                cin >> b;
                cout << "\nArea of the rectangle: " << a * b;
                break;
            
            case 4:
                cout << "\nTrapezoid base 1: ";
                cin >> a;
                cout << "\nTrapezoid base 2: ";
                cin >> b;
                cout << "\nTrapezoid height: ";
                cin >> c;
                cout << "\nArea of the trapezoid: " << ((a + b) * c) / 2;
                break;

            case 5:
                cout << "\nCircle radius: ";
                cin >> a;
                cout << "\nArea of the circle: " << ( a * a ) * 3.14;
                break;
            
            case 6:
                cout << "\n\tEND OF PROGRAM.";
                break;

            default:
                cout << "\nInvalid digit.";
        }
    } while ( op != 6 );
}