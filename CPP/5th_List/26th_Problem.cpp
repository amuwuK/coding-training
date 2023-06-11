#include <iostream>
#include <string>
using namespace std;

int main(){
    int i, j;
    string phrase, a;

    do{
        system ("cls");
        cout << "\nType a phrase: ";
        getline (cin, phrase);

        for ( i = 0; i <= phrase.length(); i++ ){
            if ( ( phrase[i] == 'a' ) || ( phrase[i] == 'e' ) || ( phrase[i] == 'i' ) || ( phrase[i] == 'o' ) || ( phrase[i] == 'u' ) ){
                for ( j = i; j < phrase.length(); j++ ){
                    phrase[j] = phrase[j+1];
                    if ( phrase[j] == ' ' ){
                        phrase[j] = phrase[j+1];
                    }
                }
            }
        }

        cout << phrase;
        
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            getline(cin, a);
        } while ( a[0] != '0' && a[0] != '1' );
    } while (a[0] == '1');
}