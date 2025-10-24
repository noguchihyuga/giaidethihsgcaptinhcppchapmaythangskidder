#include <bits/stdc++.h>
using namespace std;
// thuat toan Kadane
int main() {
    int n;
    cin >> n;
    long long max_ = -1e9;
    long long tonghientai = 0;
    for (int i = 0; i < n; i ++) {
        long long x;
        cin >> x;
        tonghientai += x;
        max_ = max(tonghientai, max_);
        if (tonghientai < 0) tonghientai = 0;
    }
    cout << max_;
    return 0;
}