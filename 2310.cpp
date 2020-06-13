#include <iostream>
#include<iomanip>
#include <string>

using namespace std;
 
int main() {
 
    int x;
    cin>>x;
    
    double jogadasTentativas[3];
    double jogadasSucesso[3];
    
    for(int i=0;i<3;i++){
        jogadasTentativas[i] = 0;
        
        jogadasSucesso[i] = 0;
    }

    for(int i=0;i<x;i++){
        string nome;
        cin>>nome;
        
        double valor;
        cin>>valor;
        jogadasTentativas[0] += valor;
        
        cin>>valor;
        jogadasTentativas[1] += valor;
        
        cin>>valor;
        jogadasTentativas[2] += valor;
        
        cin>>valor;
        jogadasSucesso[0] += valor;
        
        cin>>valor;
        jogadasSucesso[1] += valor;
        
        cin>>valor;
        jogadasSucesso[2] += valor;
    }
    
    cout<<fixed<<setprecision(2);
    cout<<"Pontos de Saque: "<<(jogadasSucesso[0]/jogadasTentativas[0])*100.0<<" %."<<endl;
    cout<<"Pontos de Bloqueio: "<<(jogadasSucesso[1]/jogadasTentativas[1])*100.0<<" %."<<endl;
    cout<<"Pontos de Ataque: "<<(jogadasSucesso[2]/jogadasTentativas[2])*100.0<<" %."<<endl;
    
    return 0;
}
