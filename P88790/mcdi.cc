#include<iostream>
using namespace std;
 
int mcd(int a, int b) {
        if (a == 0) return b;
        else if (b == 0) return a;
        if (a >= b) {
                if (a%b == 0) return b;
                else {
                        while (a%b > 0) {
                                int z;
                                z = a%b;
                                a = b;
                                b = z;
                        }
                        return b;
                }
        }
        else {
                if (b%a == 0) return a;
                else {
                        while (b%a > 0) {
                                int z;
                                z = b%a;
                                b = a;
                                a = z;
                        }
                        return a;
                }
        }
}
