#include <iostream>
using namespace std;

void write_binary(int n, int k){
	if (k>0){
		write_binary(n/2,k-1);
		cout<<n%2;
	}
}

int main(){
	int a,b;
	while (cin>>a>>b){
		write_binary(a,b);
		cout<<endl;
	}
}
	
