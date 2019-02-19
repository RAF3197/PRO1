#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<char> > Tauler;

int cerca_dico(string par,const vector<string>& diccionari,int esq,int dre){
	if (esq>dre) return -1;
	int pos=(esq+dre)/2;
	if (par<diccionari[pos]) return cerca_dico(par,diccionari,esq,pos-1);
	if (par>diccionari[pos]) return cerca_dico(par,diccionari,pos+1,dre);
	return pos;
}
	
void comp_taula(const Tauler& paraules,int k){
	bool magic=true;
	int i,cont;
	cont=0;
	while (cont<k and magic){
		i=0;
		while (i<k and magic){
			if (paraules[i][cont]!=paraules[cont][i]){
				magic=false;
			}
			++i;
		}
		++cont;
	}
	if (magic) cout<<"SI"<<endl;
	else cout<<"NO"<<endl;
}

void llegir_matriu (int k,bool& magic,Tauler& paraules, const vector<string>& diccionari,int n){
	string par;
	for (int i=0;i<k;++i){
		cin>>par;
		bool trobat=false;
		int esq,dre;
		esq=0; dre=n;
		int x=cerca_dico(par,diccionari,esq,dre);
		if (x>=0) trobat=true;
		if (not trobat) magic=false;
		if (magic){
			int p=0;
			for (int j=0;j<k;++j){
				paraules[i][j]=par[p];
				++p;
			}
		}
	}
}

int main(){
	int n;
	cin>>n;
	vector<string>diccionari(n);
	for (int i=0;i<n;++i){
		cin>>diccionari[i];
	}
	int k;
	while(cin>>k and k!=0){
		bool magic=true;
		Tauler paraules(k,vector<char>(k));
		llegir_matriu(k,magic,paraules,diccionari,n);
		if (magic) comp_taula(paraules,k);
		else cout<<"NO"<<endl;
	}
}
		
	
