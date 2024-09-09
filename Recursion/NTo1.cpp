#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void nToOne(int n) {
    if(n == 1) {
        cout << "1" << " ";
        return;
    }
    cout << n << " ";
    nToOne(n - 1);
}

void solve() {
    int n;
    cin >> n;

    nToOne(n);
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
