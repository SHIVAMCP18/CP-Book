//The string s is a palindrome.
//You have to check whether it is possible to rearrange the letters in it to get another palindrome (not equal to the given string s)


#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve() {
    string s;
    cin >> s;
    bool flag = true;
    map<char,int> m;

    for(auto c : s){
        m[c]++;
    }
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == s[s.size() - i - 1]){
            flag = true;
        }
        else{
            flag = false;
        }
    }
    if(m.size() == 2 ){
        for(auto c : s){
            if(m[c] >= 2){
                flag = true;
            }
            else{
                flag = false;
                break;
            }
        }
    }
    else if(m.size() == 1){
        flag = false;
    }
    if(flag){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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

//  4
//  codedoc
//  gg
//  aabaa
//  abba


//Output

//YES
//NO
//NO
//YES