#include <iostream>
using namespace std;
#include <string>

int main() {
int a,b,c;
cin >> a >> b >> c;

int A=a;
if (a>b) {
    A=b;
    if (b>c) A=c;
}
else if (a>c) A=c;

int C=a;
if (a<b) {
    C=b;
    if (b<c) C=c;
}
else if (a<c) C=c;

int B=a;
if (B==A) B=b;
if (B==C) B=c;
if (B==A) B=b;

string ABC;
cin >> ABC;
if (ABC=="ABC") cout << A << " " << B << " " << C ;
else if (ABC=="ACB") cout << A << " " << C << " " << B ;
else if (ABC=="BAC") cout << B << " " << A << " " << C ;
else if (ABC=="BCA") cout << B << " " << C << " " << A ;
else if (ABC=="CBA") cout << C << " " << B << " " << A ;
else cout << C << " " << A << " " << B ;
cout << endl;
}