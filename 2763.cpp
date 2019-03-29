#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str="";

    getline(cin,str);

    for(int i=0;i<14;i++){
        if(i==3 || i==7 || i==11){
            cout<<endl;
        }
        else{
            cout<<str[i];
        }
    }
    cout<<endl;

    return 0;
}
