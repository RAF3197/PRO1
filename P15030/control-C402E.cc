#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n,p,k;
	char e;
	cin>>n>>p>>k>>e;
	vector<string> v(n);
	for (int i=0;i<n;++i) cin>>v[i];
		int cont=0;
		if (e=='d'){
			for (int i=p+1;cont<k;++i){
				if (i >= v.size()) i=0;
				cout<<v[i];
				if (cont==k-1) cout<<endl;
				else cout<<" ";
				++cont;
			}
		}
		else if (e=='e'){
			for (int i=p-1;cont<k;--i){
				if (i<0) i = v.size()-1;
				cout<<v[i];
				if (cont==k-1) cout<<endl;
				else cout<<" ";
				++cont;
			}
		}
	}
