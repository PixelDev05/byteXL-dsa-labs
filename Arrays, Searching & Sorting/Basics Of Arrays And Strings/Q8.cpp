#include <bits/stdc++.h>
using namespace std;

int minCuts(string s) {
    int n = s.length();
    
    vector<vector<bool>> pal(n, vector<bool>(n, false));
    vector<int> dp(n, 0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (s[i] == s[j] && (i - j <= 2 || pal[j + 1][i - 1])) {
                pal[j][i] = true;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (pal[0][i]) {
            dp[i] = 0;
        } else {
            dp[i] = INT_MAX;
            for (int j = 0; j < i; j++) {
                if (pal[j + 1][i]) {
                    dp[i] = min(dp[i], dp[j] + 1);
                }
            }
        }
    }

    return dp[n - 1];
}

int main() {
    string s;
    cin >> s;
    cout << minCuts(s);
    return 0;
}