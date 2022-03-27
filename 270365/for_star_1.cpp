#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    for (int i=0;i<=x;i++) {
        for (int j=1;j<=i;j++) {
            cout << "*";
        }
        cout << endl;
    }
}