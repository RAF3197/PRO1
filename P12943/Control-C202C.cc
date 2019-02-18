#include <iostream>
using namespace std;

int main() {
    int i,max;
    string entrada;
    int a = 0;
    int b = 0;
    int c = 0;
    cin >> i;
    while (i >= 1){
    cin >> entrada;
     if (entrada == "a") {
         a=a+1;
    }
     else if (entrada == "b"){
         b=b+1;
     }
     else if (entrada == "c"){
         c=c+1;
     }
     i = i - 1;
    }
     if (a >= b and a >= c){
         max = a;
         entrada = "a";
     }
     else if (b >= a and b >= c){
         max = b;
         entrada = "b";
     }
     else if (c > a and c > b){
         max = c;
         entrada = "c";
     }
     cout << "majoria de "<< entrada << endl;
     cout << max <<" repeticio(ns)" << endl;
}
