#include <iostream>
using namespace std;

int mcd(int a, int b){
  if (b !=0) return mcd(b, a%b);
  else return a;
}
 
int main(){
  int a,b;
  cin>>a>>b;
  cout<<mcd(a,b)<<endl;
}
