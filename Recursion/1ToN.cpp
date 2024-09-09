#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void oneToN(int n) {
    if(n == 1) {
        cout << "1" << " ";
        return;
    }
    oneToN(n - 1);
    cout << n << " ";
}

void solve() {
    int n;
    cin >> n;

    oneToN(n);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T = 1;
    // cin >> T;
    
    while (T--)
        solve();
}
