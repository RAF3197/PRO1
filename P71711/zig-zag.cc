#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matriu;


bool creixent (const Matriu& M,int f,int c){
	for (int j=0; j<c; ++j){
		if (j%2 == 0){
			for (int i=0; i<f-1; ++i){
				if (M[i][j] >= M[i+1][j]) return false;
			}
			if (j < c-1 and M[f-1][j]>= M[f-1][j+1]) return false;
		}
		else if (j%2 != 0){
			for (int i = f-1; i > 0 ; --i){
				if (M[i][j] >= M[i-1][j]) return false;
			}
			if (j < c-1 and M[0][j] >= M[0][j+1]) return false;
		}
	}
	return true;
}
		
int main(){
	int f,c,count;
	count=1;
	while (cin>>f>>c){
		Matriu M(f,vector<int>(c));
		for (int i=0;i<f;++i){
			for (int k=0;k<c;++k){
				cin>>M[i][k];
			}
		}
		if (creixent(M,f,c)){
			cout<<"matriu "<<count<<": "<<"si"<<endl;
		}
		else cout<<"matriu "<<count<<": "<<"no"<<endl;
		++count;
	}
}
	
