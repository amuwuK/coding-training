#include <iostream>
using namespace std;

int main(){
    float salary;
    int a, id, hours, dependents;

    for ( a = 0; a < 10; a++){
        cout << "\nType in your worker's ID: ";
        cin >> id;

        cout << "\nType in ID "<< id << " hours worked: ";
        cin >> hours;

        cout << "\nType in ID "<< id << " dependents: ";
        cin >> dependents;

        if ( dependents > 3){
            cout << "\nID of the worker with more than 3 dependents: " << id;
        }

        salary = ( hours * 12 ) + ( dependents * 40 );
        cout << "\nGross salary: " << salary;

        salary = (( hours * 12 ) + ( dependents * 40 )) * 0.865;
        cout << "\nNet salary: " << salary;

    }
}