#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif


   int n;   cin>>n;

    bool flag=0;
    for (int i = 2; i<=n;i++) {
        if (i%2==0) {
            cout<<i<<'\n';
            flag = 1;
        }
    }
    if (!flag) cout<<"-1\n";


    return 0;
}
