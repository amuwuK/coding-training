#include <iostream>
#include <string>
using namespace std;

int main(){
    string phrase, phrase1, phrase2, a;

    do{
        cout << "\nType a phrase here: ";
        getline (cin, phrase);

        cout << "\nType another phrase here: ";
        getline (cin, phrase1);

        phrase2 = phrase + " " + phrase1;

        cout << "\nCombining the 2 phrases together: " << phrase2;


        
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            getline(cin, a);
        } while ( a[0] != '0' && a[0] != '1' );
    } while (a[0] == '1');
}