#include <iostream>
using namespace std;

char atbash(char c){
	int distance;
	if (c >= 'a' and c <= 'z'){
		c= c - ('a' - 'A');
	}
	distance= c - 'A';
	
	char result = 'Z' - distance;
	return result;
}

void print_atbash_encipherment(){
	char c;
	cin>>c;
	while (c != '#'){	
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))	cout<<atbash(c);
		cin>>c;
	}
	cout<<"#"<<endl;
}

int main(){
	print_atbash_encipherment();
}
