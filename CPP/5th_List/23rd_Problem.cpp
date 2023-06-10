#include <iostream>
#include <string>
using namespace std;

int main(){
    int i, equal;
    string phrase, phrase1, a;

    do{
        system ("cls");
        equal = 0;
        cout << "\nType a phrase: ";
        getline (cin, phrase);
        cout << "\nType another phrase: ";
        getline (cin, phrase1);

        for ( i = 0; i < phrase.length(); i++ ){
            if ( ( phrase[i] > 64 ) && ( phrase[i] < 91 ) ){
                phrase[i] += 32;
            }
            if ( ( phrase1[i] > 64 ) && ( phrase1[i] < 91 ) ){
                phrase[i] += 32;
            } 
            if ( phrase[i] == phrase1[i] ){
                equal++;
            }
        }

        cout << "\nThe phrase '" << phrase << "' and '" << phrase1 << "' are";
        if ( equal == phrase.length() ){
            cout << " equal.";
        } else {
            cout << "n't equal.";
        }
        
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            getline(cin, a);
        } while ( a[0] != '0' && a[0] != '1' );
    } while (a[0] == '1');
}