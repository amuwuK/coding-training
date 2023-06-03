/*Elabore um algoritmo que leia dois vetores de inteiros X e Y, cada um com 5 elementos (não permita
elementos repetidos dentro de um mesmo vetor). Em seguida calcule e escreva os seguintes vetores
resultantes:
a. Soma: soma dos elementos de X e Y de mesmo índice;
b. Distância: distância entre os elementos de X e Y de mesmo índice;*/

#include <iostream>
using namespace std;

int main(){
    int const qnt = 5;
    int a, x[qnt], y[qnt], i, j, summ, distance[qnt];

    do{
        summ = 0;
        for ( i = 0; i < qnt; i++ ){
            cout << "\nInsert a value for X[" << i << "]: ";
            cin >> x[i];
            cout << "\nInsert a value for Y[" << i << "]: ";
            cin >> y[i];

            distance[i] = x[i] - y[i];
            if ( distance[i] < 0 ){
                distance[i] *= -1;
            }
            summ += x[i] + y[i];

            for ( j = 0; j < i; j++ ){
                if ( ( x[i] == x[j] ) || ( y[i] == y[j] ) ){
                    summ -= x[i] + y[i];
                    i--;
                    cout << "\nNo repeated values! Insert again.";

                }
            }
        }

        cout << "\nSumm of all values in X and Y: " << summ;
        cout << "\nDistance of all values in X and Y with the same index: ";
        for ( i = 0; i < qnt; i++ ){
            cout << distance[i] << " ";
        }
        
        do{
            cout << "\nWanna run the program again? [ 1 - Yes / 0 - No ] ";
            cin >> a;
        } while ( a != 0 && a != 1 );
    } while (a == 1);
}