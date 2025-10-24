#include <bits/stdc++.h>
using namespace std;
int main() {
    // n < 1e6
    // y tuong dung 2 sort
    int n;
    cin >> n;
    vector<long long>a(n);
    vector<long long>b(n);
    for (int i = 0; i < n; i ++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i ++) {
        cin >> b[i];
    }
    sort(a.begin(), a.end(), greater<>());
    sort(b.begin(), b.end());
    long long sum = 0;
    for (int i = 0; i < n; i ++) {
        sum += a[i] * b[i];
    }
    cout << sum;
    return 0;
}