//
//  main.cpp
//  b3es4
//
//  Created by Roberto Ceola on 10/02/2021.
// SUP esegue parsing di stringa e svolge una funzionalità  programmabile. Nello specifico il programma prende in  input una stringa di valori di temperatura del tipo  "20C@34F@12F@23C" e converte questi in gradi Kelvin.  Stampare due tabelle distinte per conversioni Celsius e Fahrenheit.

#include <iostream>
using namespace std;
#define Lmax 50
float CtoK(const int &);
float FtoK(const int &);

int main(int argc, const char * argv[]) {
    
    cout <<"inserisci una stringa del tipo 20C@34F@12F@23C"<<endl;
    char input[Lmax];
    cin >> input;
    int i= 0, Ccounter=0, Fcounter=0, Ncounter=0; //indice, counter di temp in c e f e di numero di cifre
    int tempC [30], tempF[30];
    char num [30];
    while(input[i] != '\0'){
        while(input[i] !='@' && input[i] != '\0'){
            if(input[i]=='C'){
                Ccounter +=1;
                for(int j=0; j<= Ncounter; j++){
                    if(j==Ncounter)
                        num[j]= '\0';
                    else
                        num[j]=input[j+i-Ncounter];
                }
                tempC[Ccounter-1] = atoi(num);
                
            }
            else if(input[i]== 'F'){
                Fcounter +=1;
                for(int j=0; j<= Ncounter; j++){
                    if(j==Ncounter)
                        num[j]= '\0';
                    else
                        num[j]=input[j+i-Ncounter];
                }
                tempF[Fcounter-1] = atoi(num);
            }
            i +=1;
            Ncounter +=1;
        }
        Ncounter=0;
        i += 1;
    }
    
    for(int i=0; i<Ccounter; i++){
        cout<< "gradi Celsius = "<<tempC[i]<< "     gradi Kelvin = "<<CtoK(tempC[i])<< endl;
    }
    cout <<"- - - -"<<endl;
    for(int i=0; i<Fcounter; i++){
        cout << "gradi Fahreneit = "<< tempF[i]<< "     gradi Kelvin = "<< FtoK(tempF[i])<<endl;
    }
    
    return 0;
}




float CtoK(const int & c){
    float k;
    k = c + 273.15;
    return k;
}

float FtoK(const int & c){
    float k;
    float cs= 5/9;
    k = ((c -32) * cs) +273.15;
    return k;
}
