#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int mida=1001;
const int total=1000000000;

int main(){
	int n;
	cin>>n;
	vector<int>v(mida,0);
	for (int i=0; i<n; ++i){
		int r;
		cin>>r;
		++v[r-total];
	}
	for (int i=0; i<mida; ++i){
		if (v[i]!=0){
			cout<<total+i<<" : "<<v[i]<<endl;
		}
	}
} 
		
