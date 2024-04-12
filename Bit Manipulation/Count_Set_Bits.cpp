//Print the no. of bits we have to change such that we can convert a into b.
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve() {
    int a , b;
    cin >> a >> b;
    int n = a ^ b;
    int count = 0;

    while(n > 0){
        count+= (n & 1);
        n = n >> 1;
    }
    cout << count << endl;
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