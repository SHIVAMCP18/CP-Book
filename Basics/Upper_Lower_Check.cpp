#include<bits/stdc++.h>
using namespace std;

#define endl '\n';  
#define S_R ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
const int M = 1e9 + 7 ;

int main(){

S_R
    string s = "hello";
    string r = "HI";

    //Method - 1
    if(65 <= int(s[0]) && int(s[0]) <= 90) {
        cout << "Uppercase" << endl;
    }

    else {
        cout << "lowercase" << endl;
    }

    //Method - 2
    if(int(r[0]) >= 'A' && int(r[0]) <= 'Z'){
        cout << "Uppercase" << endl;
    }

    else{
        cout << "lowercase" << endl;
    }


    }
  