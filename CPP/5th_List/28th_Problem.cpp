#include <iostream>
#include <string>
using namespace std;

int main(){
    int smallestPhrase, i;
    string phrase, phrase1, phrase2, a;

    do{
        system ("cls");
        cout << "\nType a phrase: ";
        getline (cin, phrase);

        cout << "\nType a phrase: ";
        getline (cin, phrase1);

        if ( phrase.length() > phrase1.length() ){
            smallestPhrase = phrase1.length();
            phrase2 = phrase1;
        } else {
            smallestPhrase = phrase.length();
            phrase2 = phrase;
        }

        for ( i = 0; i <= smallestPhrase; i++ ){
                if ( i % 2 == 0 ){
                    phrase2[i] = phrase[i];
                } else {
                    phrase2[i] = phrase1[i];
                }
        }

        if ( smallestPhrase == phrase.length() ){
            phrase2 += phrase1.substr(smallestPhrase, phrase1.length());
        } else {
            phrase2 += phrase.substr(smallestPhrase, phrase.length());
        }

        cout << "\nNew phrase: " << phrase2;
        
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            getline(cin, a);
        } while ( a[0] != '0' && a[0] != '1' );
    } while (a[0] == '1');
}