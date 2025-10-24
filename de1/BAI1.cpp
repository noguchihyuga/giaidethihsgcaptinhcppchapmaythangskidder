#include <bits/stdc++.h>
using namespace std;
/*
y tuong:
uu tien n / 3
*/

int main() {
    long long n;
    cin >> n;
    if (n % 3 == 0) {
        cout << "0 " << n / 3;
    } else if (n % 3 == 1) {
        cout << "2 " << (n - 4) / 3;
    } else {
        cout << "1 " << (n - 2) / 3;
    }
    return 0;
}