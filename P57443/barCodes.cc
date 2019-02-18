#include <iostream>
#include <vector>
using namespace std;
 
int digit_control(string codi) {
    int suma = 0;
    for (int i = 0; i < 12; ++i) {
        if (i%2 == 1) suma += 3*(codi[i]-48);
        else suma += (codi[i]-48);
    }
    int decena = suma;
    while (decena%10 != 0) ++decena;
    return decena - suma;    
}
 
int main() {
    string codi;
    while (cin >> codi) {
        cout << codi << digit_control(codi) << endl;
    }
}
