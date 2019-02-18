#include <iostream>
using namespace std;

bool es_potencia_de_3(int n){
int pot=1;
while (pot<n){
    pot=pot*3;
}
return pot==n;
}
int main(){
int n;
cin>>n;
while (n != -1){
    if (es_potencia_de_3(n)){
        cout<<"fals"<<endl;
    }
    else{
              cout<<"cert"<<endl;
    }
    cin>>n;
}
}


