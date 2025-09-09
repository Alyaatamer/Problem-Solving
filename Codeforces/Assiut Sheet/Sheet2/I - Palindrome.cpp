#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif


   int n;   cin>>n;

    string str = to_string(n);

    string rev = str;

    reverse(rev.begin(),rev.end());

    string res="";
    int size = rev.size();
    for (int i =0;i<size;i++) {
        if (rev[i]=='0' && res.size()>0) res+=rev[i];
        else if (rev[i]!='0') res+=rev[i];
    }

    cout<<res<<'\n';
    if (str == rev) {
        cout<<"YES\n";
    }
    else {
        cout<<"NO\n";
    }


    return 0;
}
