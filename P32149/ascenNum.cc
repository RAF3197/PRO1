#include <iostream>
using namespace std;

bool es_ascendent(int n) {
        int comp = n%10;
        n = n/10;
        while (n != 0) {
                if ((n%10 + 1)%10 != comp) return false;
                else {
                        comp = n%10;
                        n = n/10;
                }
        }
        return true;
}

int main(){
	int a,s=0;
	bool consec=false;
	while(cin>>a and not consec ){
		if (es_ascendent(a)) ++s;
		else s=0;
		if (s>=2){
			consec=true;
		}
   }
   if (consec) cout<<"SI"<<endl;
   else if (not consec) cout<<"NO"<<endl;
}
