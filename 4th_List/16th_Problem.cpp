#include <iostream>
using namespace std;

int main(){
  int const qnt = 100;
  int a, s[qnt], i = 0, r[qnt], j;
  float re;

  do{
    do{
      cout << "\nInsert the employee salary: ";
      cin >> s[i];
      i++;
    } while ( s[i-1] != -1 );

    cout << "\nInsert the readjusment in percent: ";
    cin >> re;

    for ( j = 0; j < i-1; j++ ){
      s[j] = s[j] * ( 1 + ( re/100 ));
      cout << "\nReadjusted salary of S[" << j << "]: " << s[j];
    }
    
      
    do{
      cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
      cin >> a;
    } while ( a != 0 && a != 1 );
  } while (a == 1);
}