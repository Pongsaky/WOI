#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;

    for (int i=0;i<x;i++) {
        for (int j=0;j<i;j++) {
            cout << " ";
        }
        for (int j=0;j<x-i;j++) {
            cout << "*";
        }
        cout << "\n";
    }
}