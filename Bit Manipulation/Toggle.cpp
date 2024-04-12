//toggle means change 0 to 1 and 1 to 0
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void PrintBinary(int num){
    for(int i = 10 ; i >= 0 ; i--){
        cout << ((num >> i) & 1);
    }
    cout << endl;
}

void solve() {
    int i;
    cin >> i;
    PrintBinary(9);
    PrintBinary( 9 ^ (1 << i));
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