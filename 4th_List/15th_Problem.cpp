#include <iostream>
using namespace std;

int main(){

  int a, i, qnt;
  float average;

  do{
    average = 0;
    do{
      cout << "\nInsert the number of students you have: ";
      cin >> qnt;
    } while ( qnt <= 0 );

    int x[qnt];
    float y[qnt];
  
    for ( i = 0; i < qnt; i++ ){
      cout << "\nStudent enrollment: ";
      cin >> x[i];
      cout << "\nTheir score: ";
      cin >> y[i];
      average += y[i];
    }

    average /= qnt;

    cout << "\nScores higher than average: ";
    for ( i = 0; i < qnt; i++ ){
      if ( y[i] > average ){
        cout << y[i] << " ";
      }
    }

    cout << "\nEnrollment of students with score lower than average: ";
    for ( i = 0; i < qnt; i++ ){
      if ( y[i] < average ){
        cout << x[i] << " ";
      }
    }

    do{
      cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
      cin >> a;
    } while ( a != 0 && a != 1 );
  } while (a == 1);
}