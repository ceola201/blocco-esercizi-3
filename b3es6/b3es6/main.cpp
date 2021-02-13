//
//  main.cpp
//  b3es6
//
//  Created by Roberto Ceola on 13/02/2021.
// SUP che simula il comportamento di due dadi. I dadi possono avere  numero di facce variabile, ma per verificare la correttezza del  programma cominciare con dadi a sei facce. Il programma 'tira' i  due dadi usando la funzione rand, opportunamente inizializzata.  La somma dei valori di ogni lancio è salvata in array.  Il programma deve lanciare i dadi decine di migliaia di volte,  numero specificato dall'utente, e stampare la probabilità di ogni  valore sotto forma di tabella. Verificare che somma 7 è la più probabile con probabilità di un sesto, essendo che ci sono 6 lanci diversi  che restituiscono somma 7. Indagare poi con dadi aventi numero di  facce diverse da sei.

#include <iostream>
using namespace std;
#define f 6

int main() {
    srand(time(NULL));
    int num1, num2;
    long long n;
    long long prob [f+f-1];      //array dei vari casi(la somma minima è 2 quindi la dim è f+f-1
    for(int i=0; i< (f+f-1); i++){      //inizializzazione a 0
        prob[i]=0;
    }
    cout <<"quante volte vuoi lanciare i dadi?"<<endl;
    cin >> n;
    int sum;       //variabile per la somma
    for(int i=0; i<n; i++){
        num1 = rand() % f +1;
        num2 = rand() % f +1;
        sum = num1+ num2;
        for(int j=0; j< (f+f-1); j++){
            if(sum== j+2){      //clalcolo il numero di volte che esce una certa somma
                prob[j] +=1;
            }
        }
    }
    //stampo il risultato in tabella
    for(int i=0; i<(f+f-1); i++){
        cout << "probabilità somma " << i+2<< ": " << double(prob[i])/double(n) <<endl;
    }

    return 0;
}
