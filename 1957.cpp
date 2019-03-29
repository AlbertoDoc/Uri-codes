#include <iostream>
#include <string>
using namespace std;
int main()
{
    long long num,mod;
    cin>>num;
    string hexa;
    while(num>0){
        mod = num % 16;
        num /= 16;
        if(mod<=9){
            char c=mod+'0';
            hexa+=c;
        }
        else if(mod==10){
            hexa+='A';
		}
        else if(mod==11){
            hexa+='B';
		}
        else if(mod==12){
            hexa+='C';
		}
        else if(mod==13){
            hexa+='D';
		}
        else if(mod==14){
            hexa+='E';
		}
        else if(mod==15){
            hexa+='F';
		}
    }
    for(int i=hexa.length()-1;i>=0;i--){
        cout<<hexa[i];
	}
    cout<<endl;
}
