#include <iostream>
using namespace std;

int main(){
    int const qnt = 3;
    int a, height[qnt], age[qnt], averageHeight, tallest, shortest, adults, i, tallestAge, shortestAge;

    do{
        averageHeight = adults = 0;
        for ( i = 0; i < qnt; i++ ){
            cout << "\n#" << i << " student's height(cm): ";
            cin >> height[i];
            cout << "\n#" << i << " student's age: ";
            cin >> age[i];
        }

        tallest = shortest = height[0];
        tallestAge = shortestAge = age[0];

        for ( i = 0; i < qnt; i++ ){
            if ( height[i] > tallest ){
                tallest = height[i];
                tallestAge = age[i];
            }
            if ( height[i] < shortest ){
                shortest = height[i];
                shortestAge = age[i];
            }
            if ( age[i] >= 18 ){
                averageHeight += height[i];
                adults++;
            }
        }

        averageHeight = averageHeight / adults;

        cout << "\nAverage height between over 18 students: " << averageHeight;
        cout << "\nTallest student's age: " << tallestAge;
        cout << "\nShortest student's age: " << shortestAge;
        
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            cin >> a;
        } while ( a != 0 && a != 1 );
    } while (a == 1);
}