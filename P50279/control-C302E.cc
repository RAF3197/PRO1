#include <iostream>
using namespace std;

char complement(char c){
	if (c == 'A') return 'T';
    if (c == 'T') return 'A';
    if (c == 'C') return 'G';
    else return 'C';
}

int main(){
	char c;
	int x=0;
	while (cin>>c){
		if (x==0 and c=='T'){
			++x;
			cin>>c;
		}
		if (x==1 and c=='A'){
			 ++x;
			 cin>>c;
		 }
		else if (x==1 and c=='T') x=1;
		else x=0;
		if (x==2 and c=='G'){
			while (cin>>c){
				cout<<complement(c);
			}
		}
		else if (x==2 and c=='T') x=1;
		else if (x == 2) x = 0;
	}
	cout<<endl;
}

