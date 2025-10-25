#include <bits/stdc++.h>
#define N 1000001
using namespace std;
/*
y tuong: dung sang nguyen to + tien xu li
*/
int main() {
    vector<bool> snt(N, true);
    snt[0] = false;
    snt[1] = false;
    for (int i = 2; i <= sqrt(N); i ++) {
        if (snt[i]) {
            for (int j = i * i; j < N; j += i) {
                snt[j] = false;
            }

        }
    }
    // for (int i = 0; i < n; i ++) {
    //     int q;
    //     cin >> q;
    //     int result = 1;
    //     int o = q;
    //     while (result <= 1)
    //     {
    //         if (snt[o]) {
    //             result = o;
    //         } else {
    //             o++;
    //         }
    //     }
    //     cout << result << "\n";
    // }
    int last_snt = N - 1;
    vector<int>cache(N);
    while (last_snt--)
    {
        if (snt[last_snt]) {
            break;
        }
    }
    for (int i = N - 1; i >= 0; i --) {
        if (snt[i]) {
            last_snt = i;
        }
        cache[i] = last_snt;
    }
    int n;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        int q;
        cin >> q;
        cout << cache[q] << "\n";
    }
    return 0;
}