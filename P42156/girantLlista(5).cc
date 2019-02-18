#include <iostream>
#include <string>
using namespace std;

void llista (int& s){
	string p;
	if (cin>>p){
		++s;
	llista(s);
	if (s>0){
		cout<<p<<endl;
		--s;
		--s;
}
}
}
int main(){
	int x=0;
	llista(x);
}
