#include <bits/stdc++.h>
#define N 100000
using namespace std;
/*
y tuong: 10 ^ 18 < n < 10^255
vi tran so ko the dung N thuoc Z nen chuyen N thanh char
=> O(9 * 255) -> truong hop xau nhat -> kha thi
dung sang nguyen to neu thich
*/
long long tcs(string a) {
    long long tong = 0;
    for (int i = 0; i < a.size(); i ++) {
        tong += (int)a[i] - '0';
    }
    return tong;
}
int main() {
    // setup sang nguyen to
    vector<bool>snt(N + 1, true);
    snt[0] = false;
    snt[1] = false;
    for (int i = 2; i <= sqrt(N); i ++) {
        if (snt[i]) {
            for (int j = i * i; j <= N; j += i) {
                snt[j] = false;
            }
        }
    }
    string n;
    cin >> n;
    long long sum = tcs(n);
    if (snt[sum]) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}