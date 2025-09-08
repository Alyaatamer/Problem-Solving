#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif

    float n;
    cin>>n;

    int m = n;

    if (m==n) {
        cout<<"int "<<m<<'\n';
    }
    else {
        cout<<"float "<<m<<' '<<(n-m)<<'\n';
    }

    return 0;
}
