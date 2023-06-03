#include <iostream>
using namespace std;

int main(){
  int const qnt = 6;
  int a, result[qnt], i, n, k, j, l, m;

  do{
    l = 1;
    k = 0;
    for ( i = 0; i < qnt; i++ ){
      cout << "\nInsert the result numbers: ";
      cin >> result[i];
    }
    do{
      cout << "\nInsert the number of punters: ";
      cin >> n;
    } while ( n <= 0 );
    int punters[n], puntersNumbers[n*qnt];

    for ( i = 0; i < n; i++ ){
      punters[i] = 0;
    }

    for ( i = 0; i < n; i++ ){
      cout << "Insert the punter[" << i << "] numbers: ";
      for ( j = 0 + k; j < qnt*l; j++ ){
        cin >> puntersNumbers[j];
        for ( m = 0; m < qnt; m++ ){
          if ( puntersNumbers[j] == result[m] ){
            punters[i]++;
          }
        }
      }
      k += 6;
      l++;
    }

    for ( i = 0; i < n; i++ ){
      cout << "\nPunter[" << i << "] got ";
      if ( punters[i] == 4 ){
        cout << "a quadi!";
      } else if ( punters[i] == 5 ){
        cout << "a penta!";
      } else if ( punters[i] == 6 ){
        cout << "a mega!";
      } else {
        cout << "nothing.";
      }
    }

    do{
      cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
      cin >> a;
    } while ( a != 0 && a != 1 );
  } while (a == 1);
}