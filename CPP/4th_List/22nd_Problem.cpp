#include <iostream>
using namespace std;

int main(){
    int const qnt = 10;
    int a, x[qnt], i, biggest, smallest, value, value1;
    float average;

    do{
        for ( i = 0; i < qnt; i++ ){
            x[i] = 0;
        }
        i = 0;
        average = 0;
  
        do{
            cout << "\nTo stop the reading, insert a value <= 0.\nInsert a value for X[" << i << "]: ";
            cin >> value;
            if ( value > 0 ){
                x[i] = value;
                i++;
            }
        } while ( value > 0 && i < qnt );

        do{
            cout << "\nInsert 2 numbers to show between those index numbers all values, the biggest value, the smallest value and the average of those values. \nFirst number: ";
            cin >> value;
            cout << "\nSecond number: ";
            cin >> value1;
        } while ( ( value < 0 ) || ( value1 < value ) || ( value1 > i-1 ) );

        biggest = x[value];
        smallest = x[value];
        i = value;

        cout << "\nValues between X[" << i << "] and X[" << value1 << "]: ";

        while ( value <= value1 ){
            if ( x[value] > biggest ){
                biggest = x[value];
            }
            if ( x[value] < smallest ){
                smallest = x[value];
            }
            average += x[value];
            cout << x[value] << " ";
            value++;
        }

        average /= ( ( value1 - i ) + 1 );

        cout << "\nAverage between X[" << i << "] and X[" << value1 << "] values: " << average;
        cout << "\nBiggest value between X[" << i << "] and X[" << value1 << "]: " << biggest;
        cout << "\nSmallest value between X[" << i << "] and X[" << value1 << "]: " << smallest;

        
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            cin >> a;
        } while ( a != 0 && a != 1 );
    } while (a == 1);
}
