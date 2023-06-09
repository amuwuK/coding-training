#include <iostream>
#include <string>
using namespace std;

int main(){
    int i;
    bool found;
    string phrase, a;

    do{
        found = 0;
        cout << "\nType a phrase: ";
        getline (cin, phrase);

        for ( i = 0; i <= phrase.length() ; i++ )
            if ( ( phrase[i] < 97 ) && ( phrase[i] != ' ' ))
                phrase[i] += 32;
        
        for ( i = 0; i <= phrase.length() - 6; i++ )
            if ( ( phrase.substr(i, 6) == "phrase" ) && ( !found ) )
                found = 1;
        
        phrase[0] -= 32;

        if ( found )
            cout << "The word 'phrase' was found in '" << phrase << "'!";
        else
            cout << "The word 'phrase' wasn't found in '" << phrase << "'!";


        
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            getline(cin, a);
        } while ( a[0] != '0' && a[0] != '1' );
    } while (a[0] == '1');
}