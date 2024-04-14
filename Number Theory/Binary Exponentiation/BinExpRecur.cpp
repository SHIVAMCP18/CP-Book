#include <bits/stdc++.h>
using namespace std;
     
#define endl '\n'
#define ll long long

//Time - Complexity log(b)
//f(a,b) = a^b
//f(a,b) = f(a,b/2) * f(a,b/2) if(b == even)
//f(a,b) = a * f(a,b/2) * f(a,b/2) if(b == odd)

int BinExpRecur(int a , int b){

    if(b == 0) return 1;
    ll ans = BinExpRecur(a , b / 2);
    if(b & 1) {
        return a * ans * ans;
    }
    else{
        return ans * ans;
    }
}

void solve() {
    cout << BinExpRecur(2,10);
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