#include <iostream>

using namespace std;

int main (){

    int n1,n2;

    cin>>n1>>n2;

    if(n1>n2){
        while(n1>n2){
            n2++;
            if(n2%5 == 2 || n2%5 == 3 && n2 < n1){
                cout<<n2<<endl;
            }
        }
    }
    else{
        while(n2>n1){
            n1++;
            if(n1%5 == 2 || n1%5 == 3 && n1 < n2){
                cout<<n1<<endl;
            }
        }
    }
}