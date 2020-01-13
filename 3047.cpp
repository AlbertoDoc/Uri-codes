#include <iostream>

using namespace std;

int main(){
    int m,a,b;
    int result = 0;

    cin>>m>>a>>b;

    result = m-a-b;

    if(result>=a && result>=b){
        cout<<result<<endl;
    }
    else if(result>=a && result<=b){
        cout<<b<<endl;
    }
    else if(result<=a && result>=b){
        cout<<a<<endl;
    }
    else if(result<=a && result <=b){
        if(a>b){
            cout<<a<<endl;
        }
        else{
            cout<<b<<endl;
        }
    }
}