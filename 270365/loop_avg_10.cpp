#include <bits/stdc++.h>
using namespace std;

int main() {
    float x,n=0,sum=0;

    for (int i=0;i<10;i++) {
        cin >> x;
        sum += x;
        n++;
    }
    float avg = sum/n;
    printf("%.2f",avg);
}