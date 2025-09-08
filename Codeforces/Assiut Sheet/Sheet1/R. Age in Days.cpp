#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif


    int number ;
    cin>>number;

    int years = number/365;
    number%=365;

    int months = number/30;
    number%=30;

    int days = number;

    cout<<years<<" years\n"<<months<<" months\n"<<days<<" days\n";

    return 0;
}