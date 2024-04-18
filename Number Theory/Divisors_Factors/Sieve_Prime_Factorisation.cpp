#include <bits/stdc++.h>
using namespace std;
     
#define endl '\n'
#define ll long long
const int N = 1e7 + 10;

vector<bool> isPrime(N , 1);
vector<int> lp(N , 0) , hp(N , 0);

void solve() {
    isPrime[0] = isPrime[1] = false;
    for(int i = 2 ; i < N ; i++){
        if(isPrime[i] == true){
            lp[i] = hp[i] = i;
            for(int j = 2 * i ; j < N ; j += i){
                isPrime[j] = false;
                hp[j] = i;
                if(lp[j] == 0){
                    lp[j] = i;
                }
            }
        }
    } 
    // O(log(N))
    int num;
    cin >> num;
    vector<int> prime_factors;
    while(num > 1){
        int prime_factor = hp[num];
        while(num % prime_factor == 0){
            num /= prime_factor;
            prime_factors.push_back(prime_factor);
        } 
    }
    for(auto ele : prime_factors){
        cout << ele << " ";
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