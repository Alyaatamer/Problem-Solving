#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif

    int n;
    cin>>n;

    for (int i=2 ; i<=n ; i++) {
        bool flag = false;
        for(int j = 2; j * j <= n && i>j;j++){
            if(i%j==0){
                flag = true;
                break;
            }
        }
        if(!flag) cout<<i<<' ';
    }
    

    return 0;
}
