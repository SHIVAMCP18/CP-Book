/**Given array a of n integers.All integers are present in even count
* except one.Find that one integer which has odd count in O(N) time complexity
* and O(1) space:
**/
#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define ll long long
 
void solve() {
    int n;
    cin >> n;

    int x;
    int ans = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> x;
        ans^= x;
    }
    cout << ans << endl;
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