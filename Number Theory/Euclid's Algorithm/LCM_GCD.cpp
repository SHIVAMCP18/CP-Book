#include <bits/stdc++.h>
using namespace std;
     
#define endl '\n'
#define ll long long

int gcd(int a , int b){
    if(b == 0) return a;
    return gcd(b , a % b);
}

void solve() {
    cout << gcd(12,18);
    cout << endl;
    int LCM = (12 * 18) / gcd(12,18);  // LCM(a,b) = (a * b) / GCD(a,b)
    cout << LCM << endl;

    //Inbuilt Function
    cout << __gcd(12,18);
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