#include <bits/stdc++.h>
using namespace std;

/*
y tuong:
loai bo so 0 vo nghia tren dau
neu chu so cua a < chu so cua b thi co nghia a < b
dung so sanh string trong c++ "1" < "2"
*/
string parse_0(string &n) {
    long long s = n.size();
    string new_ = "";
    bool thua = false;
    for (long long i = 0; i < s; i ++) {
        if (thua) {
            new_ += n[i];
        } else {
            if (!thua && n[i] != '0') {
                thua = true;
                new_ += n[i];
            }
        }
    }
    if (new_.empty()) {
        new_ = "0";
    }
    return new_;
}
bool check(string &a, string &b) {
    if (b.size() != a.size()) {
        return b.size() > a.size();
    }
    return b > a;
}
int main() {
    string text;
    getline(cin, text);
    long long n = text.size();
    string so = "";
    string max_ = "0";
    for (long long i = 0; i <= n; i++) {
        if (i < n && isdigit((unsigned char)text[i])) {
            so += text[i];
        } else {
            if (!so.empty()) {
                // cout << so << "\n";
                so = parse_0(so);
                if (max_.empty()) {
                    max_ = so;
                } else {
                    if (check(max_, so)) {
                        max_ = so;
                    }
                }
                so = "";
            }
        }
    }
    cout << max_;
    return 0;
}