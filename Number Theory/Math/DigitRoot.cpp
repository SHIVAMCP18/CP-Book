#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    // Digit Root;
    // Ex - 38 --> 3 + 8 == 11
    //      11 --> 1 + 1 == 2
    // Digit Root(38) base 10 == 2

    // Formula --> N - (b - 1) * floor((N- 1) / (b - 1))
    // N --> Given Number
    // b --> base No
    // For 38 base 12 , b = 12

    int N;
    cin >> N;
    cout << N - 9 * floor((N - 1) / 9);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T = 1;
    //cin >> T;
    while(T--)
        solve();
}
