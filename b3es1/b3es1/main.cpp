//
//  main.cpp
//  b3es1
//
//  Created by Roberto Ceola on 09/02/2021.
/* SUP che prende una stringa del tipo "923D" ed estrae
il numero, convertendolo in int. La lettera D è sempre
alla fine della stringa. Verificare il funzionamento anche
con numeri negativi */

#include <iostream>
#include <cstring>
using namespace std;
#define N 100

int main(int argc, const char * argv[]) {
    cout <<"inserisci una stringa del tipo: numberD" << endl;
    char input[N];
    cin >> input;
    int l= strlen(input);
    char * a = new char[l-1];
    for(int i=0; i< l-1;i++){
        a[i]= input[i];
    }
    int num= atoi(a);
    cout << num <<endl;
    return 0;
}
