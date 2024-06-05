//Given a string S consisting of only lowercase and uppercase.
//Task - The first letter of each word is capitalized while the rest are in lowercase, except for words that are entirely in uppercase, which should remain unchanged.

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int upper(string s){
    string a;
    a = s;
    bool flag = true;
    for (int i = 0; i < s.size(); ++i)
    {
        if(a[i] == toupper(s[i])){
            flag = true;
        }
        else{
            flag = false;
            break;
        }
    }

    if(flag) return 1;
    return 0;
}

void solve() {
    while(true){
        string s;
        cin >> s;

        if(s.size() == 0){
            break;
        }

        if(upper(s)){
            cout << s << " ";
        }
        else{
            s[0] = toupper(s[0]);
            for(int i = 1 ; i < s.size() ; i++){
                s[i] = tolower(s[i]);
            }
            cout << s << " "; 
        }
    }
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

//5
//hello world
//this is a CODECHEF problem
//WELCOME to the JUNGLE
//the quick BROWN fOx
//programming in PYTHON


//Output

//Hello World
//This Is A CODECHEF Problem 
//WELCOME To The JUNGLE 
//The Quick BROWN Fox 
//Programming In PYTHON 