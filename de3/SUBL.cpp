#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
typedef long long ll;

bool check(int L, ll m, int n, const vector<ll>& a) {
    if (L > n) {
        return false;
    }
    ll sum = 0;
    for (int i = 0; i < L; ++i) {
        sum += a[i];
    }
    if (sum < m) {
        return false;
    }
    for (int i = L; i < n; ++i) {
        sum = sum - a[i - L] + a[i];
        if (sum < m) {
            return false;
        }
    }
    return true;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    ll m;
    cin >> n >> m;

    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int l = 1;
    int r = n;
    int kq = -1;

    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (check(mid, m, n, a)) {
            kq = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << kq << endl;

    return 0;
}