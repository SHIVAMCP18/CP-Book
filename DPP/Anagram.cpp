#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve() {
    string a,b;
    cin >> a >> b;

    int c[26] = {0};
    int d[26] = {0};

    if(a.size() != b.size()){
        cout << "NO" << endl;
    }

    else{
        for (int i = 0; i < a.size(); i++)
        {
            c[a[i] - 'a']++;
            d[b[i] - 'a']++;
        }

        int ct = 0;
        for(int i = 0 ; i < 26 ; i++){
            if(c[i] == d[i]){
                ct++;
                continue;
            }
            else{
                cout << "NO" << endl;
                return;
            }
        }
        if(ct == 26){
            cout << "YES" << endl;
        }
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