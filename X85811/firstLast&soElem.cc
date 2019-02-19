#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	while (cin>>n){
		vector<int>v(n);
		for (int i=0;i<n;++i){
			cin>>v[i];
		}
		int fi=n-1;
		bool primer=true;
		for (int i=0;i<n/2;++i){
			if (not primer) cout<<" ";
			cout<<v[i];
			primer=false;
			cout<<" "<<v[fi];
			--fi;
		}
		if (n%2!=0) cout<<" "<<v[n/2];
		cout<<endl;
	}
}
			
