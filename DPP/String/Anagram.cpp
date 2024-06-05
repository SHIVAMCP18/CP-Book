#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve() {
    int n;
    cin >> n;
    map<int,int> m;

    for (int i = 0; i < n; ++i)
    {
        m[i]++;
    }

    for(auto &ele : m){
        auto &key = ele.first;
        auto &value = ele.second;
        cout << key << " " << value << endl;
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