#include <iostream>
#include <string>

using namespace std;

struct sServant{
    string name, classes, append1, append2, append3;
    int stars, fouATK, fouHP, grails, skill1, skill2, skill3, npLevel, bond, level, atk, hp;
};

int main(){
    int const qnt = 5;
    int op, k, i, number, greater, lesser, iV[qnt], m;
    bool found;
    string searchString;
    sServant servants[qnt];

    k = 0;

    do{
        system ("cls");
        do{
            cout << "\n\tMenu\t\tFree spaces " << qnt - k << "\tUsed spaces " << k << "\n1 - Add a Servant;\n2 - Search for a Servant;\n3 - Change a Servant;\n4 - Delete a Servant;\n5 - Show Servants;\n6 - Exit.\n\nOption: ";
            cin >> op;
        } while ( op != 1 && op != 2 && op != 3 && op != 4 && op != 5 && op != 6  );

        switch ( op ){
            case 1:
                system ("cls");
                getchar();
                cout << "\nServant #" << k << " name: ";
                getline( cin , servants[k].name );
                if ( ( servants[k].name[0] > 96 ) && ( servants[k].name[0] < 123 ) )
                    servants[k].name[0] -= 32;
                cout << "\n" << servants[k].name << "'s class: ";
                getline( cin , servants[k].classes );
                if ( ( servants[k].classes[0] > 96 ) && ( servants[k].classes[0] < 123 ) )
                    servants[k].classes[0] -= 32;
                do{
                    cout << "\n" << servants[k].name << "'s stars: ";
                    cin >> servants[k].stars;
                } while ( servants[k].stars < 0 || servants[k].stars > 5 );
                do{
                    cout << "\n" << servants[k].name << "'s level: ";
                    cin >> servants[k].level;
                } while ( servants[k].level < 1 || servants[k].level > 120 );
                if ( servants[k].stars == 0 ){
                    if ( servants[k].level <= 90 ){
                        servants[k].grails = ( ( servants[k].level - 70 ) / 5 ) + 1;
                        if ( servants[k].grails < 0 ){
                            servants[k].grails = 0;
                        }
                    } else {
                        servants[k].grails = ( ( ( servants[k].level - 10 ) - 70 ) / 5 ) + ( ( servants[k].level - 90 ) / 2 ) + 1;
                    }
                } else if ( servants[k].stars == 1 ){
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
                do{
                    cout << "\n" << servants[k].name << "'s Fou ATK: ";
                    cin >> servants[k].fouATK;
                } while ( servants[k].fouATK < 0 || servants[k].fouATK > 2000 );
                do{
                    cout << "\n" << servants[k].name << "'s Fou HP: ";
                    cin >> servants[k].fouHP;
                } while ( servants[k].fouHP < 0 || servants[k].fouHP > 2000 );
                do{
                    cout << "\n" << servants[k].name << "'s NP level: ";
                    cin >> servants[k].npLevel;
                } while ( servants[k].npLevel < 1 || servants[k].npLevel > 5 );
                do{
                    cout << "\n" << servants[k].name << "'s bond level: ";
                    cin >> servants[k].bond;
                } while ( servants[k].bond < 0 || servants[k].bond > 15 );
                do{
                    cout << "\n" << servants[k].name << "'s 1st skill level: ";
                    cin >> servants[k].skill1;
                } while ( servants[k].skill1 < 1 || servants[k].skill1 > 10 );
                do{
                    cout << "\n" << servants[k].name << "'s 2nd skill level: ";
                    cin >> servants[k].skill2;
                } while ( servants[k].skill2 < 1 || servants[k].skill2 > 10 );
                do{
                    cout << "\n" << servants[k].name << "'s 3rd skill level: ";
                    cin >> servants[k].skill3;
                } while ( servants[k].skill3 < 1 || servants[k].skill3 > 10 );
                getchar();
                cout << "\n" << servants[k].name << "'s 1st append skill level: ";
                getline( cin , servants[k].append1 );
                cout << "\n" << servants[k].name << "'s 2nd append skill level: ";
                getline( cin , servants[k].append2 );
                cout << "\n" << servants[k].name << "'s 3rd append skill level: ";
                getline( cin , servants[k].append3 );
                cout << "\n" << servants[k].name << "'s added to the servant pool!\n\n";
                k++;
                system ("pause");
                break;
            case 2:
                if ( k == 0 ){
                    cout << "\nThere's no servants to search for!\n\n";
                    system("pause");
                } else {
                    do{
                        system ("cls");
        
                        do{
                            cout << "\nBy which parameter you want to search for?\n1 - Name;\n2 - Class;\n3 - Fous;\n4 - Bond level;\n5 - NP Level;\n6 - Return to main menu.\n\nOption: ";
                            cin >> op;
                        } while ( op != 1 && op != 2 && op != 3 && op != 4 && op != 5 && op != 6  );

                        switch ( op ){

                            case 1:
                                getchar();
                                system ("cls");
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
                                system ("cls");
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
                                system ("cls");
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
                                        system ("cls");
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
                                        system ("cls");
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

                                system ("cls");

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
                                break;

                        }

                        do{
                            cout << "\nDo you want to search for another servant? ( 0 - No / 1 - Yes ) ";
                            cin >> op;
                        } while ( op != 1 && op != 0 );
                    } while ( op == 1 );
                }
                break;

            case 3:
                if ( k == 0 ){
                    cout << "\nThere's no servants to change!\n\n";
                    system("pause");
                } else {
                    do{
                        system ("cls");
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
                                    m = 0;
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
                                            iV[m++] = i;
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
                                            iV[m++] = i;
                                        }
                                    }
                                    break;
                                    
                                case 3:
                                    break;
                            }

                            found = 0;

                            do{
                                cout << "\nSelect which servant you want to change ( insert their # ): ";
                                cin >> number;
                                for ( i = 0; i < m; i++ ){
                                    if ( ( number == iV[i] ) && ( found == 0 ) ){
                                        found = 1;
                                    }
                                }
                            } while ( !found );
                            
                            do{
                                cout << "\nName: " << servants[number].name;
                                cout << "\nLevel: " << servants[number].level;
                                cout << "\nGrails: " << servants[number].grails;
                                cout << "\nNP Level: " << servants[number].npLevel;
                                cout << "\nBond: " << servants[number].bond;
                                cout << "\nSkills: " << servants[number].skill1 << "/" << servants[number].skill2 << "/" << servants[number].skill3;
                                cout << "\nAppend: " << servants[number].append1 << "/" << servants[number].append2 << "/" << servants[number].append3;
                                cout << "\nStats: HP " << servants[number].hp << "/ ATK " << servants[number].atk;
                                cout << "\nFous: HP " << servants[number].fouHP << "/ ATK " << servants[number].fouATK;

                                do{
                                    cout << "\nSelect which parameter you want to change.\n1 - Name;\n2 - Class;\n3 - Level and Grails;\n4 - NP Level;\n5 - Bond;\n6 - Skills;\n7 - Stats;\n8 - Fous;\n9 - Return to main menu.\n\nOption: ";
                                    cin >> op;
                                } while ( op != 1 && op != 2 && op != 3 && op != 4 && op != 5 && op != 6 && op != 7 && op != 8 && op != 9  );
                                
                                switch ( op ){
                                    case 1:
                                        getchar();
                                        cout << "\nType the new name of the servant #" << number << ": ";
                                        getline ( cin, servants[number].name );
                                        cout << "\nName changed successfully!";
                                        break;
                                    case 2:
                                        getchar();
                                        cout << "\nType the new class of the servant #" << number << ": ";
                                        getline ( cin, servants[number].classes );
                                        cout << "\nClass changed successfully!";
                                        break;
                                    case 3:
                                        do{
                                            cout << "\nSelect which parameter you want to change.\n1 - Level;\n2 - Grails.\n\nOption: ";
                                            cin >> op;
                                        } while ( op != 1 && op != 2 );
                                        switch ( op ){
                                            case 1:
                                                cout << "\nType the new level of the servant #" << number << ": ";
                                                cin >> servants[number].level;
                                                cout << "\nLevel changed successfully!";
                                                break;
                                            case 2:
                                                cout << "\nType the new grail quantity of the servant #" << number << ": ";
                                                cin >> servants[number].grails;
                                                cout << "\nGrails changed successfully!";
                                                break;
                                        }
                                    case 4:
                                        cout << "\nType the new NP level of the servant #" << number << ": ";
                                        cin >> servants[number].npLevel;
                                        cout << "\nNP level changed successfully!";
                                        break;
                                    case 5:
                                        cout << "\nType the new bond level of the servant #" << number << ": ";
                                        cin >> servants[number].bond;
                                        cout << "\nBond level changed successfully!";
                                        break;
                                    case 6:
                                        do{
                                            cout << "\nSelect which type you want to change.\n1 - Skill;\n2 - Append.\n\nOption: ";
                                            cin >> op;
                                        } while ( op != 1 && op != 2 );
                                        switch ( op ){
                                            case 1:
                                                cout << "\nType the new level of the servant #" << number << "'s 1st skill: ";
                                                cin >> servants[number].skill1;
                                                cout << "\nType the new level of the servant #" << number << "'s 2nd skill: ";
                                                cin >> servants[number].skill2;
                                                cout << "\nType the new level of the servant #" << number << "'s 3rd skill: ";
                                                cin >> servants[number].skill3;
                                                cout << "\nSkill levels changed successfully!";
                                                break;
                                            case 2:
                                                cout << "\nType the new level of the servant #" << number << "'s 1st append skill: ";
                                                cin >> servants[number].append1;
                                                cout << "\nType the new level of the servant #" << number << "'s 2nd append skill: ";
                                                cin >> servants[number].append2;
                                                cout << "\nType the new level of the servant #" << number << "'s 3rd append skill: ";
                                                cin >> servants[number].append3;
                                                cout << "\nAppend skill levels changed successfully!";
                                                break;
                                        }
                                    case 7:
                                        cout << "\nType the new HP of the servant #" << number << ": ";
                                        cin >> servants[number].hp;
                                        cout << "\nType the new ATK of the servant #" << number << ": ";
                                        cin >> servants[number].atk;
                                        cout << "\nStats changed successfully!";
                                        break;
                                    case 8:
                                        cout << "\nType the new Fou HP level of the servant #" << number << ": ";
                                        cin >> servants[number].fouHP;
                                        cout << "\nType the new Fou ATK level of the servant #" << number << ": ";
                                        cin >> servants[number].fouATK;
                                        cout << "\nFou stats changed successfully!";
                                        break;
                                    case 9:
                                        break;
                                }
                                do{
                                    cout << "\nDo you want to change other stat of servant #" << number << "? ( 0 - No / 1 - Yes ) ";
                                    cin >> op;
                                } while ( op != 1 && op != 0 );
                            } while ( op == 1 );
                            do{
                                cout << "\nDo you want to change another servant's stats? ( 0 - No / 1 - Yes ) ";
                                cin >> op;
                            } while ( op != 1 && op != 0 );
                    } while ( op == 1 );
                }
                break;
            case 4:
                if ( k == 0 ){
                    cout << "\nThere's no servants to delete!\n\n";
                    system("pause");
                } else {
                    do{
                        cout << "\nYou can type -1 to return to main menu.";
                        cout << "\nType the # of the servant you want to delete: ";
                        cin >> number;
                    } while ( ( number > k ) && ( number != -1 ) );
                    if ( number > -1 ){
                        k--;
                        for ( i = number; i < k; i++ ){
                            servants[i].name = servants[i+1].name;
                            servants[i].level = servants[i+1].level;
                            servants[i].npLevel = servants[i+1].npLevel;
                            servants[i].bond = servants[i+1].bond;
                            servants[i].hp = servants[i+1].hp;
                            servants[i].atk = servants[i+1].atk;
                            servants[i].skill1 = servants[i+1].skill1;
                            servants[i].skill2 = servants[i+1].skill2;
                            servants[i].skill3 = servants[i+1].skill3;
                            servants[i].append1 = servants[i+1].append1;
                            servants[i].append2 = servants[i+1].append2;
                            servants[i].append3 = servants[i+1].append3;
                            servants[i].fouATK = servants[i+1].fouATK;
                            servants[i].fouHP = servants[i+1].fouHP;
                            servants[i].classes = servants[i+1].classes;
                            servants[i].grails = servants[i+1].grails;
                            servants[i].stars = servants[i+1].stars;
                        }
                        cout << "\nServant #" << number << " deleted successfully!";
                    }
                }
                break;
            case 5:
                if ( k == 0 ){
                    cout << "\nThere's no servants to show!\n\n";
                    system("pause");
                } else {
                    system("cls");
                    for ( i = 0; i < k; i++ ){
                        cout << "\n#" << i;
                        cout << "\nName: " << servants[i].name;
                        cout << "\nClass: " << servants[i].classes;
                        cout << "\nNP Level: " << servants[i].npLevel;
                        cout << "\nBond: " << servants[i].bond;
                        cout << "\nSkills: " << servants[i].skill1 << "/" << servants[i].skill2 << "/" << servants[i].skill3;
                        cout << "\nAppend: " << servants[i].append1 << "/" << servants[i].append2 << "/" << servants[i].append3;
                        cout << "\nFous: HP " << servants[i].fouHP << "/ ATK " << servants[i].fouATK << endl << endl;
                    }
                    system("pause");
                }
                break;
            case 6:
                cout << "\n\tEND OF PROGRAM\n\n";
                system ("pause");
                break;
        }
    } while ( op != 6 );
}