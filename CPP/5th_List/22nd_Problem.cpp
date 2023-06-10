#include <iostream>
#include <string>
using namespace std;

int main(){
    int i, spot, start;
    bool space;
    string phrase, phrase1, a;

    do{
        space = 1;
        start = 0;
        phrase1.clear();
        cout << "\nType a phrase: ";
        getline (cin, phrase);

        if ( phrase[0] == ' ' ){
            space = 0;
        }
        phrase += ' ';

        for ( i = 0; i < phrase.length(); i++ ){
            if ( phrase[i] == ' ' ){
                spot = i;
                if ( space ){
                    phrase1 += phrase.substr ( start, ( spot - start ));
                    space = 0;
                } else {
                    space = 1;
                }
                start = spot;
            }
        }

        cout << "\nYour phrase: " << phrase << "\nMy phrase: " << phrase1;
        
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            getline(cin, a);
        } while ( a[0] != '0' && a[0] != '1' );
    } while (a[0] == '1');
}