#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif

    int n;
    cin>>n;


    bool flag = false;
    for(int j = 2; j * j <= n ;j++){
        if(n%j==0){
            flag = true;
            break;
        }
    }
    if(!flag) cout<<"YES\n";
    else cout<<"NO\n";


    return 0;
}
