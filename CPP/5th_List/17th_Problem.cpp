#include <iostream>
#include <string>
using namespace std;

int main(){
    bool found;
    char c[50];
    int n[50], i, k, j;
    string phrase, a;

    do{
        k = 0;
        for ( i = 0; i < 50; i++ ){
            n[i] = 0;
        }
        cout << "\nType a phrase here ( Max length: 50 ): ";
        getline (cin, phrase);

        for ( i = 0; i < phrase.length(); i++ ){
            found = 0;
            for ( j = 0; j <= k; j++ ){
                if ( ( phrase[i] == c[j] ) && ( phrase[i] != ' ' ) && ( !found ) ){
                    n[j]++;
                    found = 1;
                }  
            }
            if ((!found) && (phrase[i] != ' ')) {
                    c[k] = phrase[i];
                    n[k++]++;
            } else {

            }
        }

        for ( i = 0; i < k; i++ ){
            cout << "\nThe letter " << c[i] << " was found " << n[i] << " times in the phrase.";
        }
        
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            getline(cin, a);
        } while ( a[0] != '0' && a[0] != '1' );
    } while (a[0] == '1');
}