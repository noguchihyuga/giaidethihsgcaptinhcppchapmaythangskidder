#include <bits/stdc++.h>
using namespace std;
int N = 500000;
int main() {
    // vector<vector<int>> ar1(N + 1);
    vector<vector<int>> ar2(N + 1);
    for (int i = 1; i <= N; i ++) {
        for (int j = i; j <= N; j += i) {
            // ar1[i].push_back(j);
            ar2[j].push_back(i);
        }
    }
    int a,b;
    cin >> a >> b;
    int dem = 0;
    for (int i = a; i <= b; i ++) {
        for (int q: ar2[i]) {
            int d = (i / q) - 1;
            if (d > 1 && d < i && i / d == i % d) {
                dem++;
            }
        }
    }
    cout << dem;
    return 0;
}