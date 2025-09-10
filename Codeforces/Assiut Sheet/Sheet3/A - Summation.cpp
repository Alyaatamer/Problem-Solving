#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif


    int n;    cin>>n;
    int a[n];

    long long sum=0;
    for (int i =0;i<n;i++) {
        cin>>a[i];
        sum+=a[i];
    }
    cout<<abs(sum)<<'\n';


    return 0;
}
