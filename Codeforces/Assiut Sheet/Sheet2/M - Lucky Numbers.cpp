#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif

    int a,b;    cin>>a>>b;

    int cnt=0;
    for (int i = a;i<=b ;i++) {
        int check = i;
        bool flag=0;

        while (check>0) {
            if (check%10!=7 && check%10!=4) {flag=1;   break; }
            check/=10;
        }
        if (!flag) { cout<<i<<" "; cnt++; }
    }

    if (cnt==0) cout<<"-1\n";


    return 0;
}
