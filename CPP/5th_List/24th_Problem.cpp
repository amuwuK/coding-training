#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, i;
    string phrase, phraseCi, a;

    do{
        system ("cls");
        cout << "\nType a phrase: ";
        getline (cin, phrase);

        phraseCi = phrase;

        cout << "\nHow many cases you want to cipher it: ";
        cin >> n;

        for ( i = 0; i < phraseCi.length(); i++ ){
            if ( ( phraseCi[i] > 96 ) && ( phraseCi[i] < 123 ) ){
                phraseCi[i] -= ( 32 - n );
            } else if ( ( phraseCi[i] > 64 ) && ( phraseCi[i] < 91 ) ){
                phraseCi[i] += n;
            }
        }

        cout << "\nYour phrase: '" << phrase << "';\nYour phrase ciphed: '" << phraseCi << "'.";
        
        do{
            getchar();
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            getline(cin, a);
        } while ( a[0] != '0' && a[0] != '1' );
    } while (a[0] == '1');
}