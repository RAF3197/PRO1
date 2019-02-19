#include <iostream>
#include <string>
using namespace std;


// see the problem statement
void make_uppercase_lowercase(const string& T) {
  

    string text; 
    while (cin >> text){
      for (int i = 0; i < text.size(); ++i)
      {
       int lowpass = text[i] - 'a'; // pone en la table ASCII; 
       int uppass = text[i] - 'A'; 
       if(text[i] >= 'a' and text[i] <= 'z' and T[lowpass]== 'U'){
        char lett = text[i] - 'z' + 'Z'; // minuscula a mayuscula; 
        cout << lett; 
       }
       else if(text[i] >= 'A' and text[i] <= 'Z' and T[uppass] == 'L'){
        char lett = text[i] - 'Z' + 'z'; 
        cout << lett; 
       }
       else if(text[i] >= 'a' and text[i] <= 'z' and T[lowpass] == 'L')cout << text[i]; 

       else if(text[i] >= 'A' and text[i] <= 'Z' and T[uppass] == 'U') cout << text[i]; 
 
    }
}
cout << endl; 
}

int main() {
    string T; 
    cin >> T;
    make_uppercase_lowercase(T);
}
