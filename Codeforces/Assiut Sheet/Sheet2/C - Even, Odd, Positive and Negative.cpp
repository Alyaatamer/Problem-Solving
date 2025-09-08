#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif

    int n;
    cin>>n;

    int x;

    int even =0 , odd=0 , nag=0,pos=0;
   for (int i = 1 ;i<=n;i++) {
       cin>>x;
       if (x>0) pos++;
       else if (x<0) nag++;

       if (x%2==0) even++;
       else if (x%2!=0) odd++;

   }

    cout<<"Even: "<<even<<'\n'<<"Odd: "<<odd<<'\n'<<"Positive: "<<pos<<'\n'<<"Negative: "<<nag<<'\n';

    return 0;
}
