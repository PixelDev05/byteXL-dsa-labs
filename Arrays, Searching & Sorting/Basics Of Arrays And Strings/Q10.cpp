#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s, sub;
    getline(cin, s);
    getline(cin, sub);

    int pos;
    cin >> pos;

    if (pos >= 0 && pos <= s.length()) {
        s.insert(pos, sub);
    }

    cout << s;
    return 0;
}