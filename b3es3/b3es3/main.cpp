//
//  main.cpp
//  b3es3
//
//  Created by Roberto Ceola on 09/02/2021.
// Localizzare in una stringa tutte le occorrenze di un determinato carattere. Le stringhe in ingresso sono composte di sole lettere minuscole e spazi. Il programma stampa la stessa stringa in ingresso con le occorrenze trovate convertite a lettere maiuscole. Stampa inoltre un conteggio delle occorrenze.

#include <iostream>
using namespace std;
#define Max 100

int main(int argc, const char * argv[]) {
    cout<< "inserisci la stringa"<<endl;
    char input[Max];
    cin.getline(input, Max);
    cout << "inserisci il carattere da localizzare e contare"<<endl;
    char C, app;
    cin >> C;
    int i=0, counter=0;
    while(input[i]!= '\0'){
        if(input[i]==C){
            counter +=1;
            app = toupper(input[i]);
            input[i]= app;
        }
        i +=1;
    }
    cout << "la stringa è '" << input << "' e il carattere '"<< C << "' compare '" << counter << "' volte"<< endl;
    return 0;
}
