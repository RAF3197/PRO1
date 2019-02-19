#include <iostream>
#include <vector>
using namespace std;

bool comprobar_diagonals(const vector<vector<int> >& m,int rpos,int cpos,int rows,int columns){
    bool first=true;
    //test NW
    int ant;
    int r = rpos;
    int c = cpos;
    while (r >= 0 and c >= 0) {
        if (first) first = false;
        else if (m[r][c] <= ant) return false;
        ant = m[r][c];
        --r;
        --c;
    }
    //test NE
    first = true;
    r = rpos;
    c = cpos;
    while (r >= 0 and c < columns) {
        if (first) first = false;
        else if (m[r][c] <= ant) return false;
        ant = m[r][c];
        --r;
        ++c;
    }
    //test SW
    first = true;
    r = rpos;
    c = cpos;
    while (r < rows and c >= 0) {
        if (first) first = false;
        else if (m[r][c] <= ant) return false;
        ant = m[r][c];
        ++r;
        --c;
    }
	//test SE
    first = true;
    r = rpos;
    c = cpos;
    while (r < rows and c < columns) {
        if (first) first = false;
        else if (m[r][c] <= ant) return false;
        ant = m[r][c];
        ++r;
        ++c;
    }
    return true;
}

int main(){
	int m,n;
	while (cin>>n>>m){
		vector<vector<int> > matriu(n,vector<int>(m));
		for (int i=0;i<n;++i){
			for (int j=0;j<m;++j){
				cin>>matriu[i][j];
			}
		}
		int p1,p2;
		cin>>p1>>p2;
		if(comprobar_diagonals(matriu,p1,p2,n,m)){
			cout<<"si"<<endl;
		}
		else cout<<"no"<<endl;
	}
}
