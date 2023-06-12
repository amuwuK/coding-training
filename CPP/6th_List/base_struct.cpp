#include <iostream>
#include <string>

using namespace std;

struct sStudent{
    int reg;
    string name, adress;
    float average;
};

int main (){
    int i;
    const int qnt = 2;
    string a;
    sStudent students[qnt];
    do{
        for ( i = 0; i < qnt; i++ ){
            system ("cls");
            cout << "\n#" << i << " student's registration: ";
            cin >> students[i].reg;
            getchar();
            cout << "\n#" << i << " student's name: ";
            getline ( cin, students[i].name );
            cout << "\n#" << i << " student's adress: ";
            getline ( cin, students[i].adress );
            cout << "\n#" << i << " student's average score: ";
            cin >> students[i].average;
        }

        getchar();
        system ("cls");

        for ( i = 0; i < qnt; i++ ){
            if ( students[i].average > 5 ){
                students[i].average += 0.5;
            }
            cout << "\n#" << i << " student's registration: " << students[i].reg;
            cout << "\n#" << i << " student's name: " << students[i].name;
            cout << "\n#" << i << " student's adress: " << students[i].adress ;
            cout << "\n#" << i << " student's average score: " << students[i].average << endl;
        }
        
        system("pause");

        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            getline(cin, a);
        } while ( a[0] != '0' && a[0] != '1' );
    } while (a[0] == '1');
}