//Swap Two Numbers Using Bitwise Operators...  :)
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve() {
    int a , b;
    cin >> a >> b;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << a << " " << b;
}

int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        int t = 1;
        //cin >> t;
        while(t--)
           solve();
}