#include <iostream>
using namespace std;

int main(){
  int const qnt = 6;
  int a, x[qnt], i, j;
  bool different = 0;

  do{
    j = qnt;
    for ( i = 0; i < qnt; i++ ){
      cout << "\nInsert a value for X[" << i << "]: ";
      cin >> x[i];
    }

    for ( i = 0; i < j; i++ ){
      if ( x[i] != x[j-1] ){
        different = 1;
      }
      j--;
    }

    cout << "\nThe vector X[" << qnt << "] is";
    if ( different ){
      cout << "n't a palindrome.";
    } else {
      cout << " a palindrome!";
    }

    do{
      cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
      cin >> a;
    } while ( a != 0 && a != 1 );
  } while (a == 1);
}