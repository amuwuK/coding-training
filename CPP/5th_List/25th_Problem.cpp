/*The goal here was to get a phrase and check if it's a palindrome, but due to blankspaces in the phrase, i couldn't do it, so instead
I made it check just for single words*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    int i, k;
    string word, wordInverted, a;

    do{
        system ("cls");
        k = 0;
        cout << "\nType a word: ";
        getline (cin, word);
        wordInverted = word;

        for ( i = word.length() - 1; i >= 0; i-- ){
            wordInverted[k++] = word[i];
        }

        cout << "\nThe word '" << word << "' is";
        if ( word == wordInverted ){
            cout << " a palindrome.";
        } else {
            cout << "n't a palindrome.";
        }
        
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            getline(cin, a);
        } while ( a[0] != '0' && a[0] != '1' );
    } while (a[0] == '1');
}