#include <iostream>
using namespace std;

int main(){
  int const qnt = 5;
  int a, x[qnt], y[qnt], z[qnt*2], i, k;

  do{
    k = 0;
    for ( i = 0; i < qnt; i++ ){
      cout << "\nInsert a value for X[" << i << "]: ";
      cin >> x[i];
      cout << "\nInsert a value for Y[" << i << "]: ";
      cin >> y[i];
    }

    for ( i = 0; i < qnt; i++ ){
      z[k] = x[i];
      k++;
      z[k] = y[i];
      k++;
    }

    cout << "\nVector Z[" << qnt*2 << "] that contains every value of X and Y: ";
    for ( i = 0; i < qnt*2 ; i++ ){
      cout << z[i] << " ";
    }
    
    do{
      cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
      cin >> a;
    } while ( a != 0 && a != 1 );
  } while (a == 1);
}