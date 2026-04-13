#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int pos;
    long long x;
    cin >> pos >> x;

    if (pos >= 0 && pos <= n) {
        arr.insert(arr.begin() + pos, x);
    }
    for (int i = 1; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}