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
    PrintBinary(9);
    int a = 9;
    int i = 0;
    if((a & (1 << i)) == 0){
        cout << "UnSet";
    }
    else{
        cout << "Set";
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