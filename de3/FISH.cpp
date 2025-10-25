#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
/* y tuong: d biet noi j */
int main() {
    ull n;
    cin >> n;
    vector<ull> ar(n);
    for (ull i = 0; i < n; i ++) {
        cin >> ar[i];
    }
    ull giamup = 1e9;
    ull tongphaimua = 0;
    for (ull i = 0; i  < n; i ++) {
        giamup = min(giamup, ar[i]);
        tongphaimua += giamup * 3;
        /*
            neu a[i] ma nhieu hon giamup thi viec d gi phai mua a[i]
        */
    }
    cout << tongphaimua;
    return 0;
}