#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if (n == 0) {
        cout << "Invalid size. The number of elements should be greater than zero.";
        return 0;
    }
    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    reverse(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}