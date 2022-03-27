#include <bits/stdc++.h>
using namespace std;

int main() {
    float x,sum=0,n=0;
    
    cin >> x;
    while (x!=0) {
        sum+=x;
        n++;
        cin >> x;
    }

    if (n==0) {
        cout << sum;
    } else {
        cout << sum/n;
    }
    
}
