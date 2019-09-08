#include <iostream>
#include <iomanip>

using namespace std;
int main (){

    int N;

    cin>>N;

    int codigo, quantidade;

    double soma = 0;

    cout<<fixed<<setprecision(2);

    for(int i=0;i<N;i++){
        cin>>codigo>>quantidade;

        if(codigo == 1001){
            soma += 1.50*quantidade;
        }
        else if(codigo == 1002){
            soma += 2.50*quantidade;
        }
        else if(codigo == 1003){
            soma += 3.50*quantidade;
        }
        else if(codigo == 1004){
            soma += 4.50*quantidade;
        }
        else if(codigo == 1005){
            soma += 5.50*quantidade;
        }
    }

    cout<<soma<<endl;
}