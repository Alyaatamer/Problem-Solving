#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif


   int t;   cin>>t;

    while (t--) {
        int n;      cin>>n;
        int a[n];

        int counter=n;
        for (int i =0;i<n;i++) {
            cin>>a[i];
        }

        int c=0;
        for (int i=0;i<n-1;i++) {
            if (a[i]>a[i+1]) {
                counter+=(c*(c+1)/2);
                c=0;
            }
            else {
                c++;
            }
        }

        counter+=(c*(c+1)/2);
        cout<<counter<<'\n';

    }

    return 0;
}
