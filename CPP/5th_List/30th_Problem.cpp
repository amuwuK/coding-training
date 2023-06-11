#include <iostream>
#include <string>

using namespace std;

int main(){
    string word, word1, a;

    do{
        system ("cls");

        cout << "\nType a word: ";
        getline (cin, word);


        int p0 = rand() % ( word.length() );
        int p1 = rand() % ( word.length() );

        word1 = word;
        word1[p0] = word[p1];
        word1[p1] = word[p0];

        cout << "\nP0: " << p0;
        cout << "\nP1: " << p1;
        cout << "\nFirst word: " << word;
        cout << "\nSecond word: " << word1;
        
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            getline(cin, a);
        } while ( a[0] != '0' && a[0] != '1' );
    } while (a[0] == '1');
    
}