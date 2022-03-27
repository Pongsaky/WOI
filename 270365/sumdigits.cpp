#include <bits/stdc++.h>
// #include <cmath>
using namespace std;

int main() {
    int x,sum=0,n;
    cin >> x;

    for (int i=1;i<=3;i++) {
        int n = round(pow(10,i));
        int k = x%n;
        sum += k/(n/10);
    }

    cout << sum;
}