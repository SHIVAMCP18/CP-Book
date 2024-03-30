#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
    

void solve() {
    map<int,int> m;
    int n;
    cin >> n;

    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        m[x]++;
    }
    for(auto it = m.begin() ; it != m.end() ; it++){
        cout << it->first << " " << it->second << endl;
    }
}

int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        int t;
        cin >> t;
        while(t--)
            solve();
}


    