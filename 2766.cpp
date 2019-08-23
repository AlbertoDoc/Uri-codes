#include <iostream>
#include <string>

using namespace std;

int main (){

    string texto[10];

    for(int i=0;i<10;i++){
        cin>>texto[i];
    }

    cout<<texto[2]<<endl;
    cout<<texto[6]<<endl;
    cout<<texto[8]<<endl;
}