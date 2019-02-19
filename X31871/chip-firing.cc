#include <iostream>
#include <vector>
using namespace std;
 
struct Cell{
        int contingut;
        string veins;
};
 
typedef  vector< vector<Cell> >  Joc;
 
bool passable(Cell a) { // analitza si la posicio te suficients chips
        return (a.veins.size()/2<=a.contingut);
}
 
int main() {
        int n;
        cin >> n;
        Joc M(n, vector<Cell> (n));
        for (int i=0; i<n; ++i) {
                for (int j=0; j<n; ++j) cin >> M[i][j].contingut;
        }
        for (int i=1; i<n-1; ++i) {
                for (int j=1; j<n-1; ++j) cin >> M[i][j].veins;
        }
        bool igual=true;
        int cont=0;
        for (int j=1; j<n-1; ++j) {
                for (int i=1; i<n-1; ++i) {
                        if (passable(M[i][j])) {
                                igual=false;
                                M[i][j].contingut = M[i][j].contingut - M[i][j].veins.size()/2;
                                int k=0;
                                while (k < M[i][j].veins.size()){
                                        if (M[i][j].veins[k] ==  'N') {
                                                if (M[i][j].veins[k+1] == 'N') {
                                                        ++M[i-1][j].contingut;
                                                        if (i-1==0) ++cont;
                                                }
                                                else if (M[i][j].veins[k+1] == 'E') {
                                                        ++M[i-1][j+1].contingut;
                                                        if (i-1==0 or j+1==n-1) ++cont;
                                                }
                                                else if (M[i][j].veins[k+1] == 'W'){
                                                        ++M[i-1][j-1].contingut;
                                                        if (i-1==0 or j-1==0) ++cont;
                                                }
                                        }
                                        else if (M[i][j].veins[k] ==  'S') {
                                                if (M[i][j].veins[k+1] == 'S') {
                                                        ++M[i+1][j].contingut;
                                                        if (i+1==n-1) ++cont;
                                                }
                                                else if (M[i][j].veins[k+1] == 'E') {
                                                        ++M[i+1][j+1].contingut;
                                                        if (i+1==n-1 or j+1==n-1) ++cont;
                                                }
                                                else if (M[i][j].veins[k+1] == 'W') {
                                                        ++M[i+1][j-1].contingut;
                                                        if (i+1==n-1 or j+-1==0) ++cont;
                                                }
                                        }
                                        else if (M[i][j].veins[k] ==  'E') {
                                                ++M[i][j+1].contingut;
                                                if (j+1==n-1) ++cont;
                                        }
                                        else {
                                                ++M[i][j-1].contingut;
                                                if (j-1==0) ++cont;
                                        }
                                        k+=2;
                                }
                        }
                }
        }
        for (int i=0; i<n; ++i) {
                for (int j=0; j<n; ++j) {
                        cout << M[i][j].contingut;
                        if (j<n-1) cout << ' ';
                        else cout << endl;
                }
        }
        if (igual) cout << "canvis: no" << endl;
        else cout << "canvis: si" << endl;
        cout << "chips nous fora: " << cont << endl;
}
