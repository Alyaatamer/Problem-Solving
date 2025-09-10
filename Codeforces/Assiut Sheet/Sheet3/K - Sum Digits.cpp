#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif


    int n;
    cin >> n;
    string s;
    cin >> s;

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += s[i] - '0';
    }
    cout << sum << '\n';

    return 0;
}
