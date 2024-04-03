// we are given an array.we have to print the unique array 
// unique array - All elememts have a count equal to 1.


#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve() {
    int n;
    cin >> n;
    int a[2 * n];

    for(int i = 0 ; i < 2 * n ; i++)
    {
        cin >> a[i];
    }

    vector<int> v;
    v.push_back(a[0]);
    for(int i = 1 ; i < 2 * n ; i++)
    {
        auto it = find(v.begin() , v.end() , a[i]);
        if(it != v.end()){
            continue;
        }
        else{
        v.push_back(a[i]);
        }
    }

    for(int i = 0 ; i < v.size() ; i++){
        cout << v[i] <<" ";
    }
    cout << endl;
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


//Input

//5 -- No.of Test cases
//2
//1 1 2 2
//4
//1 3 1 4 3 4 2 2
//5
//1 2 1 2 3 4 3 5 4 5
//3
//1 2 3 1 2 3
//4
//2 3 2 4 1 3 4 1

//Output

//1 2 
//1 3 4 2 
//1 2 3 4 5 
//1 2 3 
//2 3 4 1 

