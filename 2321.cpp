#include <iostream>
using namespace std;
int main () {
	int x0[2],x1[2],y0[2],y1[2];
    cin>>x0[0]>>y0[0]>>x1[0]>>y1[0];
    cin>>x0[1]>>y0[1]>>x1[1]>>y1[1];
 
    if(x0[0] > x1[1] || x1[0] < x0[1] || y0[0] > y1[1] || y1[0] < y0[1]){
        cout<<"0"<<endl;
    }else{
        cout<<"1"<<endl;
	}
}
