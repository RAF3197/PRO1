#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

struct Parell{
  int valor;
  int pos;
};
typedef vector<Parell> Vec_Com;
Vec_Com suma(const Vec_Com& v1, const Vec_Com& v2){
  int n1=v1.size();
  int n2=v2.size();
  Vec_Com res(n1+n2);
  int i,j,k;
  i=j=k=0;
  while (i<n1 and j<n2){
    if (v1[i].pos<v2[j].pos){
      res[k]=v1[i];
      ++i;
      ++k;
    }
    else if (v1[i].pos>v2[j].pos){
      res[k]=v2[j];
      ++j;
      ++k;
    }
	else if (v1[i].valor+v2[j].valor !=0){
        res[k].pos=v1[i].pos;
        res[k].valor=v1[i].valor+v2[j].valor;
        ++i;
        ++j;
        ++k;
    }
    else {
      ++i;
      ++j;
    }
}
  while (i<n1){
    res[k]=v1[i];
    ++i;
    ++k;
  }
  while (j<n2){
    res[k]=v2[j];
    ++j;
    ++k;
  }
  Vec_Com v3(k);
  for (int m=0;m<k;++m){
    v3[m]=res[m];
  }
  return v3;
}

void llegeix(Vec_Com& v){
char c;
  for(int i=0;i<v.size();++i){
    cin>>v[i].valor>>c>>v[i].pos;
  }
}

int main(){
  int p;
  cin>>p;
  while (p>0){
    int a,b;
    cin>>a;
    Vec_Com v1(a);
    llegeix(v1);
    cin>>b;
    Vec_Com v2(b);
    llegeix(v2);
    Vec_Com Resultat=suma(v1,v2);
    cout<<Resultat.size();
    for (int i=0;i < Resultat.size();++i){
      cout<<" ";
      cout<<Resultat[i].valor<<";"<<Resultat[i].pos;
    }
    cout<<endl;
    --p;
  }
}
