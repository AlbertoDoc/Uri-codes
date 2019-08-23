#include <iostream>
#include <string>
using namespace std;

int main (){

    int N;

    while(cin>>N){
        string palavras[N];

        cin.ignore();
        for(int i=0;i<N;i++){
            getline(cin,palavras[i]);
        }

        for(int i=0;i<N;i++){
            if(palavras[i] == ".. .. .. .. .. .. .. .. .."){
                cout<<"z"<<endl;
            }
            if(palavras[i] == ". . . . . . . . ."){
                cout<<"y"<<endl;
            }
            if(palavras[i] == "... ... ... ... ... ... ... ..."){
                cout<<"x"<<endl;
            }
            if(palavras[i] == ".. .. .. .. .. .. .. .."){
                cout<<"w"<<endl;
            }
            if(palavras[i] == ". . . . . . . ."){
                cout<<"v"<<endl;
            }
            if(palavras[i] == "... ... ... ... ... ... ..."){
                cout<<"u"<<endl;
            }
            if(palavras[i] == ".. .. .. .. .. .. .."){
                cout<<"t"<<endl;
            }
            if(palavras[i] == ". . . . . . ."){
                cout<<"s"<<endl;
            }
            if(palavras[i] == "... ... ... ... ... ..."){
                cout<<"r"<<endl;
            }
            if(palavras[i] == ".. .. .. .. .. .."){
                cout<<"q"<<endl;
            }
            if(palavras[i] == ". . . . . ."){
                cout<<"p"<<endl;
            }
            if(palavras[i] == "... ... ... ... ..."){
                cout<<"o"<<endl;
            }
            if(palavras[i] == ".. .. .. .. .."){
                cout<<"n"<<endl;
            }
            if(palavras[i] == ". . . . ."){
                cout<<"m"<<endl;
            }
            if(palavras[i] == "... ... ... ..."){
                cout<<"l"<<endl;
            }
            if(palavras[i] == ".. .. .. .."){
                cout<<"k"<<endl;
            }
            if(palavras[i] == ". . . ."){
                cout<<"j"<<endl;
            }
            if(palavras[i] == "... ... ..."){
                cout<<"i"<<endl;
            }
            if(palavras[i] == ".. .. .."){
                cout<<"h"<<endl;
            }
           if(palavras[i] == ". . ."){
                cout<<"g"<<endl;
            }
            if(palavras[i] == "... ..."){
                cout<<"f"<<endl;
            }
            if(palavras[i] == ".. .."){
                cout<<"e"<<endl;
            }
            if(palavras[i] == ". ."){
                cout<<"d"<<endl;
            }
            if(palavras[i] == "..."){
                cout<<"c"<<endl;
            }
            if(palavras[i] == ".."){
                cout<<"b"<<endl;
            }
            if(palavras[i] == "."){
                cout<<"a"<<endl;
            }
        }
    }
}