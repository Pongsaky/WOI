#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,mx=-1e9;
    for (int i=0;i<10;i++) {
        cin >> x;
        if (x>mx) {
            mx = x;
        }
    }
    cout << mx;
}