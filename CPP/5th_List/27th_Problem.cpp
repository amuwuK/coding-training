#include <iostream>
#include <string>
using namespace std;

int main(){
    int i, k;
    string phrase, phraseInverted, a;

    do{
        system ("cls");
        k = 0;
        do{
            cout << "\nType a phrase ( max. 40 characters ): ";
            getline ( cin, phrase);
        } while ( phrase.length() > 40 );

        phraseInverted = phrase;

        for ( i = phrase.length() - 1; i >= 0; i-- ){
            phraseInverted[k++] = phrase[i];
        }

        cout << "\nPhrase inverted: " << phraseInverted;
        
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            getline(cin, a);
        } while ( a[0] != '0' && a[0] != '1' );
    } while (a[0] == '1');
}