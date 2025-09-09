#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif

    int a,b;

    while (true) {
        cin>>a>>b;
        int sum=0;

        if(a<=0 || b<=0)
            break;

        if (a>b) {
            int temp=a;
            a=b;
            b=temp;
        }
        for (int i=a;i<=b;i++) {
            cout<<i<<" ";
            sum+=i;
        }
        cout<<"sum ="<<sum<<'\n';
    }


    return 0;
}
