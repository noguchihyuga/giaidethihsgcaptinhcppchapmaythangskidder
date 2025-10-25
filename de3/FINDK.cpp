#include <bits/stdc++.h>
using namespace std;
/*
y tuong dung bin search + tinh sum 1 + ... + n = n(n + 1) / 2
thay doi bat phuong trinh n(n + 1) / 2 <= tar -> n < 2tar / n + 1
*/
typedef unsigned long long ull;
int main() {
    ull n;
    cin >> n;
    ull left = 0;
    ull right = 2 * 1e9;
    ull kq = 0;
    while (left <= right)
    {
        ull mid = left + (right - left) / 2;
        if (mid <= 2 * n / (mid + 1)) {
            kq = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
        // kq = sum;
    }
    cout << kq;
    return 0;
}