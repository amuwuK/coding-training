#include <iostream>
#include <string>

using namespace std;

struct sClient{
    int id;
    string name, adress, phone;
};

int main (){
    int i;
    const int qnt = 2;
    string a;
    sClient clients[qnt];
    do{
        for ( i = 0; i < qnt; i++ ){
            system ("cls");
            cout << "\n#" << i << " client's name: ";
            getline ( cin, clients[i].name );
            cout << "\n#" << i << " client's id ( without - or . ): ";
            cin >> clients[i].id;
            getchar();
            cout << "\n#" << i << " client's adress: ";
            getline ( cin, clients[i].adress );
            cout << "\n#" << i << " client's phone: ";
            getline ( cin, clients[i].phone );
        }

        system ("cls");

        for ( i = 0; i < qnt; i++ ){
            cout << "\n#" << i << " client's id: " << clients[i].id;
            cout << "\n#" << i << " client's name: " << clients[i].name;
            cout << "\n#" << i << " client's adress: " << clients[i].adress ;
            cout << "\n#" << i << " client's phone: " << clients[i].phone << endl;
        }
        
        system("pause");

        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            getline(cin, a);
        } while ( a[0] != '0' && a[0] != '1' );
    } while (a[0] == '1');
}