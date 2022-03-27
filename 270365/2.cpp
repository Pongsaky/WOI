#include <bits/stdc++.h>
#include <time.h>
using namespace std;

int main () {
    int numtar, randnum;

    srand(time(0));
    randnum = rand() % 20000 +1;
    cout << randnum << "\n";

    do {
        cin >> numtar;
        if (randnum > numtar) {
            cout << "more than\n";
        } else if (randnum < numtar) {
            cout << "less than\n";
        } else {
            cout << "equal\n";
        }
    }
    while (randnum!=numtar);

}