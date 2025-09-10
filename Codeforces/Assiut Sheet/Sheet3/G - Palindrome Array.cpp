#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif


    int n ;       cin>>n;
    int a[n];


    for (int i=0;i<n;i++) {
        cin>>a[i];
    }

    bool flag = 0;
    for (int i =0 ; i<n;i++) {
        if (a[i]!=a[n - 1 - i]) {
            flag = 1;
            break;
        }
    }

    if (!flag) cout<<"YES\n";
    else cout<<"NO\n";



    return 0;
}
