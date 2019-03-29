#include <iostream>
#include <string>
using namespace std;
int main () {

  string str;

  while(getline(cin,str)){
    if(str=="esquerda"){
      cout<<"ingles"<<endl;
    }
    if(str=="direita"){
      cout<<"frances"<<endl;
    }
    if(str=="nenhuma"){
      cout<<"portugues"<<endl;
    }
    if(str=="as duas"){
      cout<<"caiu"<<endl;
    }
  }
}
