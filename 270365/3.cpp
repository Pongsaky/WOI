#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1,x2,gcd,i;
    cin >> x1 >> x2;
    if (x1<x2) {
        swap(x2,x1);
    }

    do {
        i = x1%x2;
        if (i==0) {
            gcd = x2;
        }
        x1 = x2;
        x2 = i;
    } while (i!=0);
    
    cout << gcd;
}