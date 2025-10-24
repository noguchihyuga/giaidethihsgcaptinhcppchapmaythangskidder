#include <bits/stdc++.h>
using namespace std;
int main() {
    // qhd co ban, tap con tang dai nhat
    int n, k;
    cin >> n >> k;
    vector<int> ar(n);
    for (int i = 0; i < n; i ++) {
        cin >> ar[i];
    }
    vector<long long> dp(n, 1);
    long long max_ = 0;
    for (int i = 0; i < n; i ++) {
        dp[i] = ar[i];
        for (int j = 0; j < i; j ++) {
            if (ar[i] - ar[j] >= k) {
                dp[i] = max(dp[i], dp[j] + ar[i]);
            }
        }
        max_ = max(max_, dp[i]);
    }
    cout << max_;
    return 0;
}