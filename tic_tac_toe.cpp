#include <iostream>
using namespace std;

int main (){
    int i, j, again, start, playCount;
    char ttt[3][3], play, letter, winner;
    bool winnerFound;

    do{
        do {
            cout << "\nSelect who starts [ 1 - X / 2 - O ]: ";
            cin >> start;
        } while ( start != 1 && start != 2 );

        if ( start == 1 ){
            play = 'X';
        } else {
            play = 'O';
        }
        winnerFound = 0;
        playCount = 0;

        ttt[0][0] = '7';
        ttt[0][1] = '8';
        ttt[0][2] = '9';
        ttt[1][0] = '4';
        ttt[1][1] = '5';
        ttt[1][2] = '6';
        ttt[2][0] = '1';
        ttt[2][1] = '2';
        ttt[2][2] = '3';

        do{
            do {
                system ("clear");
                for ( i = 0; i < 3; i++ ){
                    for (j = 0; j < 3; j++ ){
                        cout << ttt[i][j];
                        if ( j == 2 && i != 2 ){
                            cout << "\n------------------------------------\n";
                        } else if ( j == 2 && i == 2 ){
                        } else {
                            cout << "\t|\t";
                        }
                    }
                }
                cout << endl << play << " decide which number you want to score: ";
                cin >> letter;
            } while ( letter != '7' && letter != '8' && letter != '9' && letter != '4' && letter != '5' && letter != '6' && letter != '1' && letter != '2' && letter != '3' );

            switch ( letter ){
                case '7' :
                    if ( ttt[0][0] == '7' ){
                        ttt[0][0] = play;
                        if ( play == 'O' ){
                            play = 'X';
                        } else {
                            play = 'O';
                        }
                    }
                    break;
                case '8' :
                    if ( ttt[0][1] == '8' ){
                        ttt[0][1] = play;
                        if ( play == 'O' ){
                            play = 'X';
                        } else {
                            play = 'O';
                        }
                    }
                    break;
                case '9' :
                    if ( ttt[0][2] == '9' ){
                        ttt[0][2] = play;
                        if ( play == 'O' ){
                            play = 'X';
                        } else {
                            play = 'O';
                        }
                    }
                    break;
                case '4' :
                    if ( ttt[1][0] == '4' ){
                        ttt[1][0] = play;
                        if ( play == 'O' ){
                            play = 'X';
                        } else {
                            play = 'O';
                        }
                    }
                    break;
                case '5' :
                    if ( ttt[1][1] == '5' ){
                        ttt[1][1] = play;
                        if ( play == 'O' ){
                            play = 'X';
                        } else {
                            play = 'O';
                        }
                    }
                    break;
                case '6' :
                    if ( ttt[1][2] == '6' ){
                        ttt[1][2] = play;
                        if ( play == 'O' ){
                            play = 'X';
                        } else {
                            play = 'O';
                        }
                    }
                    break;
                case '1' :
                    if ( ttt[2][0] == '1' ){
                        ttt[2][0] = play;
                        if ( play == 'O' ){
                            play = 'X';
                        } else {
                            play = 'O';
                        }
                    }
                    break;
                case '2' :
                    if ( ttt[2][1] == '2' ){
                        ttt[2][1] = play;
                        if ( play == 'O' ){
                            play = 'X';
                        } else {
                            play = 'O';
                        }
                    }
                    break;
                case '3' :
                    if ( ttt[2][2] == '3' ){
                        ttt[2][2] = play;
                        if ( play == 'O' ){
                            play = 'X';
                        } else {
                            play = 'O';
                        }
                    }   
            }
            if ( ( ttt[0][0] == ttt[0][1] && ttt[0][0] == ttt[0][2])  || ( ttt[0][0] == ttt[1][0] && ttt[0][0] == ttt[2][0] ) || ( ttt[0][0] == ttt[1][1] && ttt[0][0] == ttt[2][2] ) ){
                winnerFound = 1;
                winner = ttt[0][0];
            } else if ( ( ttt[0][2] == ttt[1][1] && ttt[0][2] == ttt[2][0] ) || ( ttt[0][2] == ttt[1][2] && ttt[0][2] == ttt[2][2] ) ){
                winnerFound = 1;
                winner = ttt[0][2];
            } else if ( ( ttt[1][1] == ttt[0][1] && ttt[1][1] == ttt[2][1] ) || ( ttt[1][1] == ttt[1][0] && ttt[1][1] == ttt[1][2] ) ){
                winnerFound = 1;
                winner = ttt[1][1];
            } else if ( ttt[2][0] == ttt[2][1] && ttt[2][0] == ttt[2][2] ){
                winnerFound = 1;
                winner = ttt[0][2];
            } else if ( playCount == 8 ){
                winnerFound = 1;
                winner = 'D';
            }
            playCount++;
        } while (!winnerFound);

        system ("clear");
        for ( i = 0; i < 3; i++ ){
            for (j = 0; j < 3; j++ ){
                cout << ttt[i][j];
                if ( j == 2 && i != 2 ){
                    cout << "\n------------------------------------\n";
                } else {
                    cout << "\t|\t";
                }
            }
        }
        if ( winner != 'D' ){
            cout << endl << winner << " is the winner!";
        } else {
            cout << "\nThe game ended in a draw.";
        }
        do{
            cout << "\nWanna play it again? [ 1 - Yes / 0 - No ] ";
            cin >> again;
        } while ( again != 1 && again != 0 );
    } while ( again == 1 );
}