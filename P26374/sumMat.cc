#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matriu;

Matriu suma(const Matriu& a, const Matriu& b){
	int x=b.size();
	Matriu res(x,vector<int>(x));
	for (int i=0;i<x;++i){
		for (int j=0;j<x;++j){
			res[i][j]=a[i][j]+b[i][j];
		}
	}
	return res;
}

int main(){
}
