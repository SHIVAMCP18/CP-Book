#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void insert1(vector<int>& v , int temp) {
    if(v.size() == 0 || v[v.size() - 1] <= temp) {
        v.push_back(temp);
        return;
    }

    int val = v[v.size() - 1];
    v.pop_back();
    insert1(v , temp);
    v.push_back(val);
    return;
}

void sortArray(vector<int>& v) {
    if(v.size() == 1) {
        return;
    }

    int temp = v[v.size() - 1];
    v.pop_back();
    sortArray(v);
    insert1(v , temp);
}

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0 ; i < n ; i++) {
        cin >> a[i];
    }

    sortArray(a);

    for(auto i : a) {
        cout << i << " ";
    }
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
