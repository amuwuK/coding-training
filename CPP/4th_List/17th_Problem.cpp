#include <iostream>
using namespace std;

int main(){
  int const qnt = 5;
  int a, x[qnt], i, crescent, decrescent;

  do{
    crescent = decrescent = 0;
    for ( i = 0; i < qnt; i ++ ){
      cout << "\nInsert a value for X[" << i << "]: ";
      cin >> x[i];
      if ( i > 0 ){
        if ( x[i] > x[i-1] ){
          crescent++;
        } else if ( x [i] < x[i-1] ){
          decrescent++;
        }
      }
    }
    
    cout << "\nThe vector X[" << qnt << "] is in ";
    if ( crescent == qnt - 1 ){
      cout << "crescent order.";
    } else if ( decrescent == qnt - 1 ){
      cout << "decrescent order.";
    } else {
      cout << "random order.";
    }
    
    do{
      cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
      cin >> a;
    } while ( a != 0 && a != 1 );
  } while (a == 1);
}