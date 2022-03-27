#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,n=0,sum=0;
    cin >> x;
    while (x!=0) {
        sum+=x;
        n++;
        cin >> x;
    }
    float avg = sum/n;
    cout << avg;
}