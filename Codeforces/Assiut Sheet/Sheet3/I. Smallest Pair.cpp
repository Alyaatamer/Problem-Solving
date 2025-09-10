#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif


    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];


        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int mn = INT_MAX;
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                int res = a[i] + a[j] + (j+1)-(i+1);
                if (i != j) mn = min(mn, res);
            }
        }

        cout << mn << '\n';
    }

    return 0;
}
