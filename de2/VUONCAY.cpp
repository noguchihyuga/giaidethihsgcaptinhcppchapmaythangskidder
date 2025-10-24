#include <bits/stdc++.h>
using namespace std;
/*
y tuong chi luu cua tung cot nghia la ar[j] += ...
*/
int main() {
    int m,n;
    cin >> m >> n;
    vector<long long> ar(n);
    for (int i = 0; i < m; i ++) {
        for (int j = 0; j < n; j ++) {
            long long x = 0;
            cin >> x;
            ar[j] += x;
        }
    }
    for (int i = 0; i < n; i ++) {
        cout << ar[i];
        if (i < n - 1) {
            cout << " ";
        }
    }
    return 0;
}