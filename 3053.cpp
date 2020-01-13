#include <iostream>

using namespace std;

int main(){
    bool cups[3];
    cups[0] = false;
    cups[1] = false;
    cups[2] = false;

    int n,movement;
    cin>>n;

    char character;
    cin>>character;

    if(character == 'A'){
        cups[0] = true;
    }
    else if(character == 'B'){
        cups[1] = true;
    }
    else{
        cups[2] = true;
    }

    for(int i=0;i<n;i++){
        cin>>movement;
        if(movement == 1){
            if(cups[0] == true){
                cups[0] = false;
                cups[1] = true;
            }
            else if(cups[1] == true){
                cups[1] = false;
                cups[0] = true;
            }
        }
        else if(movement == 2){
            if(cups[1] == true){
                cups[1] = false;
                cups[2] = true;
            }
            else if(cups[2] == true){
                cups[2] = false;
                cups[1] = true;
            }
        }
        else if(movement == 3){
            if(cups[2] == true){
                cups[2] = false;
                cups[0] = true;
            }
            else if(cups[0] == true){
                cups[0] = false;
                cups[2] = true;
            }
        }
    }

    if(cups[0] == true){
        cout<<"A"<<endl;
    }
    else if(cups[1] == true){
        cout<<"B"<<endl;
    }
    else{
        cout<<"C"<<endl;
    }
}