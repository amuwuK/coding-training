#include <iostream>
#include <string>
using namespace std;

int main(){
    int i;
    string phrase, a;

    do{
        cout << "\nType a phrase here: ";
        getline (cin, phrase);

        cout << "'" << phrase << "' backwards: ";
        for ( i = phrase.length() - 1; i >= 0; i-- ){
            cout << phrase[i];
        }


        
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            getline(cin, a);
        } while ( a[0] != '0' && a[0] != '1' );
    } while (a[0] == '1');
}