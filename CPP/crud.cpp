#include <iostream>
#include <string>

using namespace std;

struct sServant{
    string name, classes, append1, append2, append3;
    int stars, fouATK, fouHP, grails, skill1, skill2, skill3, npLevel, bond, level, atk, hp;
};

int main(){
    int a, op, k, i, searchInt, number, greater, lesser;
    int const qnt = 5;
    string searchString;
    sServant servants[qnt];

    k = 0;

    do{
        do{
            cout << "\n\tMenu\n1 - Add a Servant;\n2 - Search a Servant;\n3 - Change a Servant;\n4 - Delete a Servant;\n5 - Show Servants;\n6 - Exit.\n\nOption: ";
            cin >> op;
        } while ( op != 1 && op != 2 && op != 3 && op != 4 && op != 5 && op != 6  );

        switch ( op ){
            case 1:
                system ("cls");
                getchar();
                cout << "\nServant #" << 0 << " name: ";
                getline( cin , servants[k].name );
                if ( ( servants[k].name[0] > 96 ) && ( servants[k].name[0] < 123 ) )
                    servants[k].name[0] -= 32;
                cout << "\n" << servants[k].name << "'s class: ";
                getline( cin , servants[k].classes );
                if ( ( servants[k].classes[0] > 96 ) && ( servants[k].classes[0] < 123 ) )
                    servants[k].classes[0] -= 32;
                cout << "\n" << servants[k].name << "'s stars: ";
                cin >> servants[k].stars;
                cout << "\n" << servants[k].name << "'s level: ";
                cin >> servants[k].level;
                if ( servants[k].stars == 1 ){
                    if ( servants[k].level <= 90 ){
                        servants[k].grails = ( ( servants[k].level - 70 ) / 5 ) + 1;
                        if ( servants[k].grails < 0 ){
                            servants[k].grails = 0;
                        }
                    } else {
                        servants[k].grails = ( ( ( servants[k].level - 10 ) - 70 ) / 5 ) + ( ( servants[k].level - 90 ) / 2 ) + 1;
                    }
                } else  if ( servants[k].stars == 2 ){
                    if ( servants[k].level <= 90 ){
                        servants[k].grails = ( ( servants[k].level - 70 ) / 5 ) + 1;
                        if ( servants[k].grails < 0 ){
                            servants[k].grails = 0;
                        }
                    } else {
                        servants[k].grails = ( ( ( servants[k].level - 10 ) - 70 ) / 5 ) + ( ( servants[k].level - 90 ) / 2 ) + 1;
                    }
                } else  if ( servants[k].stars == 3 ){
                    if ( servants[k].level <= 90 ){
                        servants[k].grails = ( ( servants[k].level - 70 ) / 5 );
                        if ( servants[k].grails < 0 ){
                            servants[k].grails = 0;
                        }
                    } else {
                        servants[k].grails = ( ( ( servants[k].level - 10 ) - 70 ) / 5 ) + ( ( servants[k].level - 90 ) / 2 );
                    }
                } else  if ( servants[k].stars == 4 ){
                    if ( servants[k].level <= 90 ){
                        servants[k].grails = ( ( servants[k].level - 80 ) / 5 );
                        if ( servants[k].grails < 0 ){
                            servants[k].grails = 0;
                        }
                    } else {
                        servants[k].grails = ( ( ( servants[k].level - 10 ) - 70 ) / 5 ) + ( ( servants[k].level - 90 ) / 2 );
                    }
                } else {
                    servants[k].grails = ( servants[k].level - 90 ) / 2;
                }
                cout << "\n" << servants[k].name << "'s ATK: ";
                cin >> servants[k].atk;
                cout << "\n" << servants[k].name << "'s HP: ";
                cin >> servants[k].hp;
                cout << "\n" << servants[k].name << "'s Fou ATK: ";
                cin >> servants[k].fouATK;
                cout << "\n" << servants[k].name << "'s Fou HP: ";
                cin >> servants[k].fouHP;
                cout << "\n" << servants[k].name << "'s NP level: ";
                cin >> servants[k].npLevel;
                cout << "\n" << servants[k].name << "'s bond level: ";
                cin >> servants[k].bond;
                cout << "\n" << servants[k].name << "'s 1st skill level: ";
                cin >> servants[k].skill1;
                cout << "\n" << servants[k].name << "'s 2nd skill level: ";
                cin >> servants[k].skill2;
                cout << "\n" << servants[k].name << "'s 3rd skill level: ";
                cin >> servants[k].skill3;
                getchar();
                cout << "\n" << servants[k].name << "'s 1st append skill level: ";
                getline( cin , servants[k].append1 );
                cout << "\n" << servants[k].name << "'s 2nd append skill level: ";
                getline( cin , servants[k].append2 );
                cout << "\n" << servants[k].name << "'s 3rd append skill level: ";
                getline( cin , servants[k].append3 );
                cout << "\n" << servants[k++].name << "'s added to the servant pool!";
                break;
            case 2:
                do{
                    cout << "\nBy which parameter you want to search for?\n1 - Name;\n2 - Class;\n3 - Fous;\n4 - Bond level;\n5 - NP Level;\n6 - Return to main menu.\n\nOption: ";
                    cin >> op;
                } while ( op != 1 && op != 2 && op != 3 && op != 4 && op != 5 && op != 6  );
                switch ( op ){
                    case 1:
                        getchar();
                        cout << "\nType the servant's name to search for: ";
                        getline ( cin, searchString );
                        if ( ( searchString[0] > 96 ) && ( searchString[0] < 123 ) )
                            searchString[0] -= 32;
                        for ( i = 0; i < k; i++ ){
                            if ( servants[i].name.find(searchString) != string::npos ){
                                cout << "\n#" << i;
                                cout << "\nClass: " << servants[i].classes;
                                cout << "\nNP Level: " << servants[i].npLevel;
                                cout << "\nBond: " << servants[i].bond;
                                cout << "\nSkills: " << servants[i].skill1 << "/" << servants[i].skill2 << "/" << servants[i].skill3;
                                cout << "\nAppend: " << servants[i].append1 << "/" << servants[i].append2 << "/" << servants[i].append3;
                                cout << "\nFous: HP " << servants[i].fouHP << "/ ATK " << servants[i].fouATK;
                            }
                        }
                        break;
                    case 2:
                        getchar();
                        cout << "\nType the servant's class to search for: ";
                        getline ( cin, searchString );
                        if ( ( searchString[0] > 96 ) && ( searchString[0] < 123 ) )
                            searchString[0] -= 32;
                        for ( i = 0; i < k; i++ ){
                            if ( servants[i].classes.find(searchString) != string::npos ){
                                cout << "\n#" << i;
                                cout << "\nName: " << servants[i].name;
                                cout << "\nNP Level: " << servants[i].npLevel;
                                cout << "\nBond: " << servants[i].bond;
                                cout << "\nSkills: " << servants[i].skill1 << "/" << servants[i].skill2 << "/" << servants[i].skill3;
                                cout << "\nAppend: " << servants[i].append1 << "/" << servants[i].append2 << "/" << servants[i].append3;
                                cout << "\nFous: HP " << servants[i].fouHP << "/ ATK " << servants[i].fouATK;
                            }
                        }
                        break;
                    case 3:
                        do{
                            cout << "\nWhich type of fou?\n1 - ATK;\n2 - HP.\n\nOption: ";
                            cin >> op;
                        } while ( op != 1 && op != 0 );

                        do{
                            lesser = greater = 0;
                            cout << "\nGreater than or equal to( min. 0 / max. 2000 ): ";
                            cin >> greater;
                        } while ( greater < 0 && greater > 2000 );

                        if ( greater < 2000 ){
                            do{
                                cout << "\nLesser than or equal to( max. 2000 ): ";
                                cin >> lesser;
                            } while ( lesser > 2000 );
                        }

                        switch ( op ){
                            case 1:
                                for ( i = 0; i < k; i++ ){
                                    if ( ( servants[i].fouATK >= greater ) && ( servants[i].fouATK <= lesser ) && ( lesser != 0 ) ){
                                        cout << "\n#" << i;
                                        cout << "\nName: " << servants[i].name;
                                        cout << "\nClass: " << servants[i].classes;
                                        cout << "\nFou ATK: " << servants[i].fouATK;
                                    } else if ( servants[i].fouATK >= greater ){
                                        cout << "\n#" << i;
                                        cout << "\nName: " << servants[i].name;
                                        cout << "\nClass: " << servants[i].classes;
                                        cout << "\nFou ATK: " << servants[i].fouATK;
                                    }
                                } 
                                break;
                            case 2:
                                for ( i = 0; i < k; i++ ){
                                    if ( ( servants[i].fouHP >= greater ) && ( servants[i].fouHP <= lesser ) && ( lesser != 0 ) ){
                                        cout << "\n#" << i;
                                        cout << "\nName: " << servants[i].name;
                                        cout << "\nClass: " << servants[i].classes;
                                        cout << "\nFou HP: " << servants[i].fouHP;
                                    } else if ( servants[i].fouHP >= greater ){
                                        cout << "\n#" << i;
                                        cout << "\nName: " << servants[i].name;
                                        cout << "\nClass: " << servants[i].classes;
                                        cout << "\nFou HP: " << servants[i].fouHP;
                                    }
                                }
                        }
                        break;
                    case 4:
                        do{
                            lesser = greater = 0;
                            cout << "\nGreater than or equal to( min. 0 / max. 15 ): ";
                            cin >> greater;
                        } while ( greater < 0 && greater > 15 );

                        if ( greater < 15 ){
                            do{
                                cout << "\nLesser than or equal to( max. 15 ): ";
                                cin >> lesser;
                            } while ( lesser > 15 );
                        }

                        for ( i = 0; i < k; i++ ){
                            if ( ( servants[i].bond >= greater ) && ( servants[i].bond <= lesser ) && ( lesser != 0 ) ){
                                cout << "\n#" << i;
                                cout << "\nName: " << servants[i].name;
                                cout << "\nClass: " << servants[i].classes;
                                cout << "\nBond: " << servants[i].bond;
                            } else if ( servants[i].bond >= greater ){
                                cout << "\n#" << i;
                                cout << "\nName: " << servants[i].name;
                                cout << "\nClass: " << servants[i].classes;
                                cout << "\nBond: " << servants[i].bond;
                            }
                        } 
                        break;
                    case 5:
                        do{
                            lesser = greater = 0;
                            cout << "\nGreater than or equal to( min. 1 / max. 5 ): ";
                            cin >> greater;
                        } while ( greater < 1 && greater > 5 );

                        if ( greater < 5 ){
                            do{
                                cout << "\nLesser than or equal to( max. 5 ): ";
                                cin >> lesser;
                            } while ( lesser > 5 );
                        }

                        for ( i = 0; i < k; i++ ){
                            if ( ( servants[i].npLevel >= greater ) && ( servants[i].npLevel <= lesser ) && ( lesser != 0 ) ){
                                cout << "\n#" << i;
                                cout << "\nName: " << servants[i].name;
                                cout << "\nClass: " << servants[i].classes;
                                cout << "\nBond: " << servants[i].npLevel;
                            } else if ( servants[i].npLevel >= greater ){
                                cout << "\n#" << i;
                                cout << "\nName: " << servants[i].name;
                                cout << "\nClass: " << servants[i].classes;
                                cout << "\nNP Level: " << servants[i].npLevel;
                            }
                        } 
                        break;
                    case 6:
                }
                break;
            case 3:
                do{
                    cout << "\nBy which parameter you want to search for?\n1 - Name;\n2 - Class;\n3 - Return to main menu.\n\nOption: ";
                    cin >> op;
                } while ( op != 1 && op != 2 && op != 3 );

                    switch( op ){
                        case 1:
                            getchar();
                            cout << "\nType the servant's name to search for: ";
                            getline ( cin, searchString );
                            if ( ( searchString[0] > 96 ) && ( searchString[0] < 123 ) )
                                searchString[0] -= 32;
                            for ( i = 0; i < k; i++ ){
                                if ( servants[i].name.find(searchString) != string::npos ){
                                    cout << "\n#" << i;
                                    cout << "\nClass: " << servants[i].classes;
                                    cout << "\nLevel: " << servants[i].level;
                                    cout << "\nGrails: " << servants[i].grails;
                                    cout << "\nNP Level: " << servants[i].npLevel;
                                    cout << "\nBond: " << servants[i].bond;
                                    cout << "\nSkills: " << servants[i].skill1 << "/" << servants[i].skill2 << "/" << servants[i].skill3;
                                    cout << "\nAppend: " << servants[i].append1 << "/" << servants[i].append2 << "/" << servants[i].append3;
                                    cout << "\nStats: HP " << servants[i].hp << "/ ATK " << servants[i].atk;
                                    cout << "\nFous: HP " << servants[i].fouHP << "/ ATK " << servants[i].fouATK;
                                }
                            }
                            break;
                        case 2:
                            getchar();
                            cout << "\nType the class to search for: ";
                            getline ( cin, searchString );
                            if ( ( searchString[0] > 96 ) && ( searchString[0] < 123 ) )
                                searchString[0] -= 32;
                            for ( i = 0; i < k; i++ ){
                                if ( servants[i].classes.find(searchString) != string::npos ){
                                    cout << "\n#" << i;
                                    cout << "\nName: " << servants[i].name;
                                    cout << "\nLevel: " << servants[i].level;
                                    cout << "\nGrails: " << servants[i].grails;
                                    cout << "\nNP Level: " << servants[i].npLevel;
                                    cout << "\nBond: " << servants[i].bond;
                                    cout << "\nSkills: " << servants[i].skill1 << "/" << servants[i].skill2 << "/" << servants[i].skill3;
                                    cout << "\nAppend: " << servants[i].append1 << "/" << servants[i].append2 << "/" << servants[i].append3;
                                    cout << "\nStats: HP " << servants[i].hp << "/ ATK " << servants[i].atk;
                                    cout << "\nFous: HP " << servants[i].fouHP << "/ ATK " << servants[i].fouATK;
                                }
                            }
                            break;
                    }
                    do{
                        cout << "\nSelect which parameter you want to change.\n1 - Name;\n2 - Class;\n3 - Level and Grails;\n4 - NP Level;\n5 - Bond;\n6 - Skills;\n7 - Stats;\n8 - Fous;\n9 - Return to main menu.\n\nOption: ";
                        cin >> op;
                    } while ( op != 1 && op != 2 && op != 3 && op != 4 && op != 5 && op != 6 && op != 7 && op != 8 && op != 9  );
                    
                    switch ( op ){
                        case 1
                    }
                break;
            case 4:
                cout << ".";
                break;
            case 5:
                cout << ".";
                break;
            case 6:
                cout << ".";
                break;
        }
    } while ( op != 6 );
}