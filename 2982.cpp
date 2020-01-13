#include <iostream>

using namespace std;

int main(){
    char character;
    long long n;
    long long value;
    long long cont = 0;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>character;
        cin>>value;
        if(character == 'G'){
            cont -= value;
        }
        else{
            cont += value;
        }
    }

    if(cont<0){
        cout<<"NAO VAI TER CORTE, VAI TER LUTA!"<<endl;
    }
    else{
        cout<<"A greve vai parar."<<endl;
    }

}