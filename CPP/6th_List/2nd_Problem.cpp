#include <iostream>
#include <string>

using namespace std;

struct sAnimal{
    int age;
    string name, race;
};

int main (){
    int i, elder, k;
    const int qnt = 5, less = 2;
    string a, elderName, search;
    sAnimal animals[qnt];
    do{
        elder = k = 0;
        for ( i = 0; i < qnt - less; i++ ){
            system ("cls");
            cout << "\n#" << i << " animal's name: ";
            getline ( cin, animals[i].name );
            if ( ( animals[i].name[0] > 96 ) && ( animals[i].name[0] < 123 ) )
                animals[i].name[0] -= 32;
            cout << "\n#" << i << " animal's race: ";
            getline ( cin, animals[i].race );
            if ( ( animals[i].race[0] > 96 ) && ( animals[i].race[0] < 123 ) )
                animals[i].race[0] -= 32;
            cout << "\n#" << i << " animal's age: ";
            cin >> animals[i].age;
            getchar();
            if ( animals[i].age > elder ){
                elder = animals[i].age;
                elderName = animals[i].name;
            }
            k++;
        }

        system ("cls");

        cout << "\nElder animal name: " << elderName << endl;

        system("pause");
        system ("cls");

        do{
            cout << "\nDo you want to find an animal by race? [ 1 - Yes / 0 - No ] ";
            getline(cin, a);
        } while ( a != "0" && a != "1" );

        do{
            if ( a == "1" ){
                system ("cls");
                cout << "\nWhat race you want to search for? ";
                getline ( cin, search );
                if ( ( search[0] > 96 ) && ( search[0] < 123 ) )
                    search[0] -= 32;
                for ( i = 0; i < k; i++ ){
                    if ( search == animals[i].race ){
                        cout << "\n#" << i << " animal's name: " << animals[i].name;
                        cout << "\n#" << i << " animal's age: " << animals[i].age << endl;
                    }
                }
                do{
                    cout << "\nDo you want to search again? [ 1 - Yes / 0 - No ] ";
                    getline(cin, a);
                } while ( a != "0" && a != "1" );
            }
        } while ( a == "1" );
        
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            getline(cin, a);
        } while ( a[0] != '0' && a[0] != '1' );
    } while (a[0] == '1');
}