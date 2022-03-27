#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,sum=0;
    cin >> x;
    for (int i=1;i<=x;i++) {
        cout << i << " ";
        sum += i;
    }
    cout << "\n" << sum;
}