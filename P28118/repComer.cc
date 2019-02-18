#include <iostream>
#include <cmath>
using namespace std;
 
double distancia(double x1, double y1, double x2, double y2){
        double x, y;
        if (x1 == x2 and y1 == y2) return 0;
        cin >> x >> y;
        if (x == x1 and y == y1) return sqrt((x2 - x)*(x2 - x) + (y2 - y)*(y2 - y));
        return sqrt((x2 - x)*(x2 - x) + (y2 - y)*(y2 - y)) + distancia(x1, y1, x, y);
}
 
int main() {
        cout.setf(ios::fixed);
        cout.precision(4);
        string c;
        double x1, y1, x2, y2;
        while (cin >> c){
                cin >> x1 >> y1 >> x2 >> y2;
                cout << "Trajecte " << c << ": " << distancia(x1, y1, x2, y2) + sqrt((x1 - x2)*(x1 - x2) + (y2 - y1)*(y2 - y1)) << endl;
        }
}
