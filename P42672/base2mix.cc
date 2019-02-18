#include<iostream>
using namespace std;
 
void barrejar_base(int a, int b) {
        if (a != 0 and b != 0) {
                barrejar_base(a/2,b/2);
                cout << a%2;
                cout << b%2;
        }
}
 
int main() {
        int x, y;
        while (cin >> x >> y) {
                barrejar_base(x,y);
                cout << endl;
        }

    }
