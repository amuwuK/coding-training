#include <iostream>
#include <string>
using namespace std;

int main(){
    int i, blank;
    string phrase, a;

    do{
        cout << "\nType your full name: ";
        getline (cin, phrase);

        blank = 0;
        i = phrase.length();
        cout << "\nPassport name: ";
        do{
            i--;
            if ( phrase[i] == ' ' ){
                blank = i;
            }
        } while ( blank == 0 );

        cout << phrase.substr( blank+1, phrase.length() - blank ) << ", ";

        i = 0;
        blank = 0;
        do{
            if ( phrase[i] == ' ' ){
                blank = i;
            }
            i++;
        } while ( blank == 0 );

        cout << phrase.substr( 0, blank );
        
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            getline(cin, a);
        } while ( a[0] != '0' && a[0] != '1' );
    } while (a[0] == '1');
}