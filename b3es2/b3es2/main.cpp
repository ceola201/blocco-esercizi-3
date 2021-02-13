//
//  main.cpp
//  b3es2
//
//  Created by Roberto Ceola on 09/02/2021.
//  SUP che prende una stringa dall'utente che può essere anche una frase, comprensiva quindi di spazi e punteggiatura. Il programma ristampa la stessa stringa al contrario.

#include <iostream>
using namespace std;
#define NMax 100

int main(int argc, const char * argv[]) {
    char s[NMax];
    cout << "inserisci una stringa"<<endl;
    cin.getline(s, NMax);
    unsigned int l= strlen(s);
    cout << "la sringa al contrario è:\t"<<endl;
    for(int j=l; j>=0; j--){
        cout<< s[j];
    }
    cout << endl;
    return 0;
}
