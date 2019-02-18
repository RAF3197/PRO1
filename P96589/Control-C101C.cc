#include <iostream>
using namespace std;

int main(){
	char a;
	cin>>a;
	if (a>='0' and a<='9'){
		cout<<"digit"<<endl;
	}
	else if ((a>='A' and a<='Z') or (a>='a' and a<='z')){
		cout<<"lletra"<<endl;
	 }
	 else {
		 cout<<"res"<<endl;
	 }
 }
 
