#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    vector<int> arr(5);
    cout << "Enter The Input: ";

    for(int i = 0 ; i < 5 ; i++){
        cin >> arr[i];
    }

    //File ko open karo
    ofstream fout;
    fout.open("DPP.txt");
    fout << "Original Data\n";
    for(int i = 0 ; i < 5 ; i++){
        fout << arr[i] << " ";
    }

    fout << "\nSorted Data\n";
    sort(arr.begin() , arr.end());
    for(int i = 0 ; i < 5 ; i++){
        fout << arr[i] << " ";
    }
    fout.close();
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T = 1;
    //cin >> T;
    while(T--)
        solve();
}
