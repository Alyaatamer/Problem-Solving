#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif


    string input;
    cin>>input;

    int num = input[0] - '0';
    if (num%2==0) {
        cout<<"EVEN"<<'\n';
    }
    else {
        cout<<"ODD"<<'\n';
    }

    return 0;
}
