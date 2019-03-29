#include <iostream>

using namespace std;

int main()
{
    int N;

    cin>>N;

    if(N==1){
        cout<<"Top 1\n";
        return 0;
    }
    else if(N<=3){
        cout<<"Top 3\n";
        return 0;
    }
    else if(N<=5){
        cout<<"Top 5\n";
        return 0;
    }
    else if(N<=10){
        cout<<"Top 10\n";
        return 0;
    }
    else if(N<=25){
        cout<<"Top 25\n";
        return 0;
    }
    else if(N<=50){
        cout<<"Top 50\n";
        return 0;
    }
    else if(N<=100){
        cout<<"Top 100\n";
        return 0;
    }
    return 0;
}
