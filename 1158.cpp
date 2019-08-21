#include <iostream>

using namespace std;

int main (){

    int n,x,y;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>x>>y;
        int cont = 0;
        if(x%2==0){
            x++;
            for(int j=0;j<y;j++){
            cont+=x;
            x+=2;
            }
        }
        else{
            for(int j=0;j<y;j++){
                cont+=x;
                x+=2;
            }
        }
        cout<<cont<<endl;
    }
}