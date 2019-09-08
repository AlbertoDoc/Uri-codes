#include <iostream>
using namespace std;

int main (){
    int hora, minutos;
    char separador;

    while(cin>>hora>>separador>>minutos){
        minutos += 60;
        while(minutos>=60){
            minutos -= 60;
            hora++;
        }
        hora -= 8;
        if(hora<0){
            cout<<"Atraso maximo: 0"<<endl;
        }
        else if(hora==0 && minutos>0){
            minutos += hora*60;
            cout<<"Atraso maximo: "<<minutos<<endl;
        }
        else if(hora == 0 && minutos<0){
            cout<<"Atraso maximo: 0"<<endl;
        }
        else {
            minutos += hora*60;
            cout<<"Atraso maximo: "<<minutos<<endl;
        }
    }
}