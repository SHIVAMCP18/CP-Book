#include<bits/stdc++.h>
using namespace std;

#define endl '\n';  
#define S_R ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
const int M = 1e9 + 7 ;

int main(){

S_R
    string s = "10";

    int x = s[0];

    cout << x * x << endl; //This will print the ASCII value square of s[0]

    //To-avoid it

    int y = s[0] - '0'; //Basically we subtract ASCII value of 0 to That numeber

    cout << y * y << endl;
}
  