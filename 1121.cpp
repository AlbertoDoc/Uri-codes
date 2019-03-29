#include <iostream>
using namespace std;
int main(){

	int N,M,S;
	cin>>N>>M>>S;

	while(N!=0 && M!=0 && S!=0){
		char arena[N+2][M+2];
		int cont=0,x,y;
		char o;
		for(int i=1;i<=N;i++){
			for(int j=1;j<=M;j++){
				cin>>arena[i][j];
				if(arena[i][j] == 'N'||arena[i][j] == 'S'||arena[i][j] == 'L'||arena[i][j] == 'O'){
					x=i;
					y=j;
					o=arena[i][j];
				}
			}
		}
		for(int i=0;i<=N+1;i++){
			arena[i][0]='#';
			arena[i][M+1]='#';
		}
		for(int j=0;j<=M+1;j++){
			arena[0][j]='#';
			arena[N+1][j]='#';
		}
		while(S--){
			char com;
			cin>>com;
    			//cout<<com;
			if(com=='D'){
				if(o=='N'){
					o='L';
				}
				else if(o=='S'){
					o='O';
				}
				else if(o=='L'){
					o='S';
				}
				else if(o=='O'){
					o='N';
				}
			}
			else if(com=='E'){
				if(o=='N'){
					o='O';
				}
				else if(o=='S'){
					o='L';
				}
				else if(o=='L'){
					o='N';
				}
				else if(o=='O'){
					//cout<<o;
					o='S';
				}
			}
			else if(com=='F'){         
				if(o=='N'){
					x--;
					if(arena[x][y]=='*'){
						cont++;
						arena[x][y]='.';
					}
					else if(arena[x][y]=='#') x++;
					}
					else if(o=='S'){
					x++;
					//cout<<arena[x][y];
					if(arena[x][y]=='*'){
						//cout<<arena[x][y];
						cont++;
						arena[x][y]='.';
					}
					else if(arena[x][y]=='#') x--;
				}
				else if(o=='L'){
					y++;
					if(arena[x][y]=='*'){
						cont++;
						arena[x][y]='.';
					}
					else if(arena[x][y]=='#') y--;
				}
				else if(o=='O'){
					y--;
					if(arena[x][y]=='*'){
						cont++;
						arena[x][y]='.';
					}
					else if(arena[x][y]=='#'){
						//cout<<arena[x][y]; 
						y++;
					}
				}
			}
		//cout<<x<<' '<<y<<' '<<o<<endl;
		}
		cout<<cont<<endl;
		cin>>N>>M>>S;
	}
}
