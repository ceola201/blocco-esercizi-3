//
//  main.cpp
//  b3es5
//
//  Created by Roberto Ceola on 11/02/2021.
// SUP che data una stringa in input calcola le occorrenze di ogni carattere.  Risolvere il problema usando un unico array per contare le occorrenze.  Stampare il risultato in tabella, con possibili interessanti statistiche a vostra discrezione. Considerare solo lettere dell'alfabeto, maiuscole  e minuscole fanno parte dello stesso conteggio. Scartare tutto ciò che  non è una lettera, per semplicità si scartano anche i caratteri della tabella ASCII estesa come le lettere accentate.

//estensione: prende in ingresso da file di testo

#include <iostream>
#include <fstream>
using namespace std;
#define Nmax 100
#define Na 26     //il numero massimo di occorrenze sono le lettere dell'alfabeto

int main(int argc, const char * argv[]) {
    //prendo in ingresso una frase
    /*
    char input [Nmax];
    cout <<"inserisci una frase"<<endl;
    cin.getline(input, Nmax);
    */
    char occ [Na];      //array per le lettere
    long Cocc [Na];        //array per il conteggio delle occorrenze
    int i =0;      // indice per input
    
    //inizializzo l'array risultato
    for(int i=0; i<Na; i++){
        occ[i]= char(i+65);
    }
    for(int i=0; i<Na; i++){
        Cocc[i]=0;
    }
    
    //uso file di testo
    char c;
    fstream myin;
    myin.open(argv[1], ios::in);
    if(myin.fail())
        cout << "il file " << argv[1] << " non esiste"<<endl;
    else{
        while(myin.get(c)){
            for(int j=0; j<Na;j++){
                if( c == char(j+65)  || c == char (j+97)){
                    Cocc[j] += 1;
                }
            }
        }
    }
    myin.close();
    
    //calcolo le occorrenze
    /*
    while(input[i]!= '\0'){
        for(int j=0; j<Na;j++){
            if(input[i]== char(j+65)  || input[i]== char (j+97)){
                Cocc[j] += 1;
            }
        }
        i +=1;
    }
    */
    //stampo  il risultato
    for(int i=0; i<Na; i++){
        cout<< occ[i] << " =   "<< Cocc[i] <<endl;
    }
    
    return 0;
}
