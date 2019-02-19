#include <iostream>

using namespace std;

bool is_circular_increasing() {
  
  int n, originalFirst, ant, realFirst;
  bool realFirstFound=false;
  
  cin >> n;
  
  originalFirst = ant = realFirst = n;
  
  while(cin >> n) {
    
    if (n < ant) {
      if (n <= originalFirst and not realFirstFound) {
	realFirst = n;
	realFirstFound = true;
      }
      else return false;
    }
    
    if (realFirstFound and n > originalFirst) return false;
    
    ant = n;
    
  }
  
  return true;
  
}

int main() {
  
  if (is_circular_increasing()) cout << "yes" << endl;
  else cout << "no" << endl;
  
}