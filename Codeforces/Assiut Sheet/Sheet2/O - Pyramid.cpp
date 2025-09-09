#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif

    int n;
    cin>>n;

    for (int i=1 ; i<=n ; i++) {
        for (int j = 0;j<i;j++) {
            cout<<'*';
        }
        cout<<'\n';
    }

    return 0;
}
