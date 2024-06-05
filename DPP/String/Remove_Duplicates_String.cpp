#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
vector<char>v;
map<char,int>m;

void solve() {
    string s;
    cin >> s;

    for(int i = 0 ; i < s.size() ; i++){
        m[s[i]]++;
        if(m[s[i]] == 1){
            v.push_back(s[i]);
        }
    }
    for(auto ele : v){
        cout << ele;
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
