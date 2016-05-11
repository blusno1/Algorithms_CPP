#include <iostream>

using namespace std;

int gcd(int m,int n){
    if(m==0)
        return n;
    if(n==0)
        return m;
    return gcd(n,m%n);
}

int main() {
    cout << gcd(24,60) << endl;
    return 0;
}