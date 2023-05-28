#include <iostream>
using namespace std;

int main(){
    int const qnt = 5;
    int a;

    do{
        
        do{
        cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
        cin >> a;
        } while ( a != 0 && a != 1 );
    } while (a == 1);
}