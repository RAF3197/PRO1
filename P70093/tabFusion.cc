#include <iostream>
#include <vector>
using namespace std;

vector<double> fusio(const vector<double>& v1, const vector<double>& v2){
	int tam1=v1.size();
	int tam2=v2.size();
	int tam_res=tam1+tam2;
	vector<double>v(tam_res);
	int i,j,k;
	i=j=k=0;
	while (j<tam1 and k<tam2){
		if (v1[j]<v2[k]){
			v[i]=v1[j];
			++j;
			++i;
		}
		else if (v2[k]<v1[j]){
			v[i]=v2[k];
			++k;
			++i;
		}
		else if (v1[j]==v2[k]){
			v[i]=v1[j];
			++i;
			++j;
			v[i]=v2[k];
			++k;
			++i;
		}
	}
	while (j<tam1){
		v[i]=v1[j];
		++j;
		++i;
	}
	while (k<tam2){
		v[i]=v2[k];
		++i;
		++k;
	}
	return v;
}

int main(){
}
