// Print all Subsequences Whose sum is 2

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

vector<vector<int> > subsets;

void generate(vector<int> &subset , int i , vector<int> &nums , int s , int sum){

    if(i == nums.size()){
        if(s == sum){
            subsets.push_back(subset);
        }
        return;
    }

    subset.push_back(nums[i]);
    s += nums[i];

    generate(subset , i + 1 , nums , s , sum);
    s -= nums[i];
    subset.pop_back();

    generate(subset , i + 1 , nums , s , sum);
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int sum;
    cin >> sum;
    vector<int> empty;
    generate(empty , 0 , a , 0 , sum);

    for(auto subset : subsets){
        for(auto ele : subset){
            cout << ele << " ";
        }
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    //cin >> T;
    while (T--)
        solve();
}
