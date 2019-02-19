#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int>v(n);
	for (int i=0;i<n;++i) cin>>v[i];
	int count,fi;
	count=0;
	fi=n-1;
	int i=0;
	while (i<fi){
		if (v[fi] !=0 or v[i] !=0){
			if (-v[i]==v[fi]){
				++i;
				--fi;
			}
			else if ((v[i] * -1) < v[fi]){
				--fi;
				++count;
			}
			else {
				++i;
				++count;
			}
		}
	}
	if (i==fi and v[i] !=0) ++count;
	cout<<count<<endl;
}
