#include <iostream>
using namespace std;

int main(){
    int const qnt = 5;
    int a, x[qnt], summOdd = 0, summEven = 0, i;

    do{

      for ( i = 0; i < qnt; i++ ){
        x[i] = i * 2;
        if ( x[i] % 2 == 0 ){
          summEven += x[i];
        } else {
          summOdd += x[i];
        }
      }

      cout << "\nSumm of even elements in X: " << summEven;
      cout << "\nSumm of odd elements in X: " << summOdd;

      do{
      cout << "\nWanna do it again? [ 1 - Yes / 0 - No ] ";
      cin >> a;
      } while ( a != 0 && a != 1 );
    } while (a == 1);
}