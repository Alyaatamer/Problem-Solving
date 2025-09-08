#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif

    int n;
    cin>>n;

    int mx = INT_MIN;
    int x;

   for (int i = 1 ;i<=n;i++) {
       cin>>x;
       mx=max(mx,x);
   }
    cout<<mx<<'\n';

    return 0;
}
