#include <bits/stdc++.h>
using namespace std;
     
#define endl '\n'
#define ll long long

//Iterative Method is faster than the Recursive Method..
//Time - Complexity log(b)

int BinExpIter(int a , int b){
    int ans = 1;
    while(b){
        if(b & 1){
            ans = ans * a;
        }
        a = a * a;
        b = b >> 1;
    }
    return ans;
}

void solve() {
    cout << BinExpIter(2,10);
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