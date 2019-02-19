#include <iostream>
#include <vector>
using namespace std;

int cont_bacteris (const vector<vector<char> >& m,int x, int y){
	int cont=0;
	for (int q = x-1;q < x+2; ++q){
		for (int w = y-1; w < y+2; ++w){
			if (m[q][w]=='B') ++cont;
		}
	}
	return cont;
}
int main(){
	int n,m;
	bool primer;
	primer=true;
	while (cin>>n>>m and n!=0 and m!=0){
		vector<vector<char> >matriu(n+2,vector<char>(m+2));
		vector<vector<char> >post(n,vector<char>(m));
		for (int i=1;i <= n; ++i){
			for (int j=1;j <= m; ++j){
				cin>>matriu[i][j];
			}
		}
		for (int i=1;i <= n;++i){
			for (int j=1;j <= m; ++j){
				if (matriu[i][j]=='B'){
					if ((cont_bacteris(matriu,i,j)-1 == 2) or (cont_bacteris(matriu,i,j)-1 ==3)) post[i-1][j-1]='B';
					else post[i-1][j-1]='.';
				}
				else if (matriu[i][j]=='.'){
					if (cont_bacteris(matriu,i,j)==3) post[i-1][j-1]='B';
					else post[i-1][j-1]='.';
				}
			}
		}
		if (primer){
			for (int i=0;i<n;++i){
				for (int j=0;j<m;++j) cout<<post[i][j];
				cout<<endl;
			}
			primer=false;
		}
		else {
			cout<<endl;
			for (int i=0;i<n;++i){
				for (int j=0;j<m;++j) cout<<post[i][j];
				cout<<endl;
			}
		}			
	}
}
