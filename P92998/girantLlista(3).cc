#include <iostream>
#include <string>
using namespace std;

void llista (int s){
	string p;
	cin>>p;
	if (s>1) llista(--s);
	cout<<p<<endl;
}
int main(){
	int x;
	cin>>x;
	if (x!=0) llista(x);
}
