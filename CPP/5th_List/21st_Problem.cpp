#include <iostream>
#include <string>
using namespace std;

int main(){
    int i;
    string phrase, phrase1, a;

    do{
        cout << "\nType a phrase: ";
        getline (cin, phrase);

        phrase1 = phrase;

        if ( ( phrase[0] >= 65 ) && ( phrase[0] < 91 ) ){
            for ( i = 0; i <= phrase.length(); i++ ){
                if ( ( phrase[i] >= 65 ) && ( phrase[i] < 91 ) ){
                    phrase1[i] = phrase[i] + 32;
                } else {
                    phrase1[i] = phrase[i];
                }
            }
        } else if ( ( phrase[0] >= 97 ) && ( phrase[0] < 123 ) ){
            for ( i = 0; i <= phrase.length(); i++ ){
                if ( ( phrase[i] >= 97 ) && ( phrase[i] < 123 ) ){
                    phrase1[i] = phrase[i] - 32;
                } else {
                    phrase1[i] = phrase[i];
                }
            }
        }

        cout << "\nThe phrase you type:\n" << phrase << "\nModified:\n" << phrase1;
        
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            getline(cin, a);
        } while ( a[0] != '0' && a[0] != '1' );
    } while (a[0] == '1');
}