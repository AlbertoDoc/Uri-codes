#include <iostream>

using namespace std;

int main (){

    int n;

    cin>>n;

    for(int i=0;i<n;i++){

        int impar1,impar2,cont = 0;

        cin>>impar1>>impar2;

        if(impar1>impar2){
            if(impar2%2==0){
                impar2+=1;
                while(impar1>impar2){
                    cont+=impar2;
                    impar2+=2;
                }
            }
            else{
                impar2+=2;
                while(impar1>impar2){
                    cont+=impar2;
                    impar2+=2;
                }
            }
        }
        else if(impar1<impar2){
            if(impar1%2==0){
                impar1+=1;
                while(impar1<impar2){
                    cont+=impar1;
                    impar1+=2;
                }
            }
            else{
                impar1+=2;
                while(impar1<impar2){
                    cont+=impar1;
                    impar1+=2;
                }
            }
        }
        else{
            cont = 0;
        }

        cout<<cont<<endl;
    }
}