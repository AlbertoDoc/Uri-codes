#include <iostream>
 
using namespace std;
 
int main(){
 
    int N, i;
    cin >> N;

    int mina[N+2];
    mina[0]=0;
    mina[N+1]=0;
    
    for(i=1; i<=N; i++){
        cin >> mina [i];
        
    }
    
    for(i=1; i<=N; i++){
        cout << mina[i+1]+mina[i]+mina[i-1] << endl;
    }
    
    
    return 0;
}
