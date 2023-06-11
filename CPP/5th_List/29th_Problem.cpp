#include <iostream>
#include <string>

using namespace std;

int main(){
    string word, word1, word2, word3, a;

    do{
        system ("cls");
        do{
            cout << "\nType a word: ";
            getline (cin, word);

            cout << "\nType another word of the same size: ";
            getline (cin, word1);
        } while ( word.length() != word1.length() );

        int p = rand() % ( word.length() - 1 );

        word2 = word.substr(0, p);
        word2 += word1.substr(p, ( word.length() - p ));
        word3 = word1.substr(0, p);
        word3 += word.substr(p, ( word.length() - p ));

        cout << "\nP: " << p;
        cout << "\nFirst word: " << word;
        cout << "\nSecond word: " << word1;
        cout << "\nThird word: " << word2;
        cout << "\nFourth word: " << word3;
        
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            getline(cin, a);
        } while ( a[0] != '0' && a[0] != '1' );
    } while (a[0] == '1');
    
}