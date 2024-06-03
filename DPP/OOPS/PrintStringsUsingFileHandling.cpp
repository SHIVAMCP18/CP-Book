#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ofstream fout;
    fout.open("Dpp.txt");
    fout << "Hello Shivam\n";
    fout << "Hello Satyam\n";
    fout << "Hello\n";
    fout.close();

    ifstream fin;
    fin.open("Dpp.txt");

    string line;

    while(getline(fin , line)){
        cout << line << endl;
    }
    fin.close();
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
