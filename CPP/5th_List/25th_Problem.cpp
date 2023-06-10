#include <iostream>
#include <string>
using namespace std;

int main(){
    string phrase, a;

    do{
        system ("cls");
        cout << "\nType a phrase: ";
        getline (cin, phrase);


        
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            getline(cin, a);
        } while ( a[0] != '0' && a[0] != '1' );
    } while (a[0] == '1');
}