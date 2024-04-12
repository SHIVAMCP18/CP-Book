#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve() {
    int n;
    cin >> n;

    if(n & 1){                 // 0 & 1 == 0
        cout << "ODD" << endl; // 1 & 1 == 1 
    }                          // Odd numbers always end with a digit that is equal to 1.
    else{
        cout << "EVEN" << endl;
    }
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