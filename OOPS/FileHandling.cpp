#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    //File ko open karna
    ofstream fout;
    fout.open("shivam.txt");//Agar File Present Nahi Hai to khud se create kar dega aur open kar dega
    //Write kar sakta hu
    fout << "Hello World";

    fout.close(); // Resources Release Kar Sakta hu.

    //File ko Read karega 
    ifstream fin;
    fin.open("shivam.txt");
    //fir read karo
    char c;
    fin >> c;

    while(!fin.eof()){
        cout << c;
        c = fin.get();
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
