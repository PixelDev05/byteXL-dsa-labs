#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;
    long double sum = 0;
    for (long long i = 0; i < n; i++) {
        long long x;
        cin >> x;
        sum += x;
    }

    long double average = sum / n;

    cout << fixed << setprecision(2) << average;
    return 0;
}
