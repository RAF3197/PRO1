#include <string>
#include <iostream>
#include <vector>
using namespace std;

struct Info { 
	char contingut; // Mur (’X’), buit (’.’) o deixalles (dígit)
	int energia; // Aportacio d’energia solar de la casella 
};

typedef vector< vector<Info> > Camp;

bool muro (int p1,int p2, const Camp& camp, char ordre){
	if (ordre=='N' and camp[p1-1][p2].contingut=='X') return true;
	else if (ordre=='S' and camp[p1+1][p2].contingut=='X') return true;
	else if (ordre=='E' and camp[p1][p2+1].contingut=='X') return true;
	else if (ordre=='O' and camp[p1][p2-1].contingut=='X') return true;
	return false;
}

void tarea(int& p1,int& p2,Camp& camp, int& energia, int& deixalles){
	if (camp[p1][p2].contingut>='0' and camp[p1][p2].contingut<='9'){
		deixalles+=camp[p1][p2].contingut-'0';
		--energia;
		camp[p1][p2].contingut='.';
		energia+=camp[p1][p2].energia;
	}
}
void compliment_del_deure_ecologic(string& ordre,Camp& camp,int& p1,int& p2, int& energia,int& deixalles){
	int m=ordre.size();
	for (int o=0;o<m;++o){
		while (energia>0 and not muro(p1,p2,camp,ordre[o])){
			if (ordre[o]=='N' and camp[p1-1][p2].contingut!='X') --p1;
			else if (ordre[o]=='S' and camp[p1+1][p2].contingut!='X') ++p1;
			else if (ordre[o]=='E' and camp[p1][p2+1].contingut!='X') ++p2;
			else if (ordre[o]=='O' and camp[p1][p2-1].contingut!='X') --p2;
			tarea (p1,p2,camp,energia,deixalles);
		}
	}
}


int main(){
	int f,c;
	int deixalles=0;
	cin>>f>>c;
	Camp camp(f,vector<Info>(c));
	for (int i=0;i<f;++i){
		for (int j=0;j<c;++j){
			cin>>camp[i][j].contingut;
		}
	}
	for (int i=0;i<f;++i){
		for (int j=0;j<c;++j){
			char x;
			cin >> x;
			camp[i][j].energia = x-'0';
		}
	}
	int p1,p2,energia;
	cin>>p1>>p2>>energia;
	string L;
	cin>>L;
	compliment_del_deure_ecologic(L,camp,p1,p2,energia,deixalles);
	cout<<"escombraries: "<<deixalles<<endl;
	cout<<"energia: "<<energia<<endl;
	cout<<"posicio: ("<<p1<<","<<p2<<")"<<endl;
}
