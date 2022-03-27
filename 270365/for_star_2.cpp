#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    for (int i=0;i<x;i++) {
        for (int j=x-i;j>0;j--) {
            cout << "*";
        }
        cout << endl;
    }
}