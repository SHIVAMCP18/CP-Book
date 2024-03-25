#include<bits/stdc++.h>
using namespace std;

#define endl '\n';  
#define S_R ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
const int M = 1e9 + 7 ;

int main(){

S_R
    string s = "abcd";

    for(char c : s){
        c++; //Increment all the char by 1 
    }

    cout << s << endl;

    //But at some cases it will not give the correct output

    string s1 = "zz";

    for(char c : s1){
        c++;
    }

    cout << s1 << endl; //Output - {{ 

    //ASCII value of z = 122 ans 122 + 1 is ASCII value of {

    // Want to fix it 


        string s2 = "zz";

    for(char& c : s2){
        if(c == 'z'){
            c = 'a';
        }

        else{
            c++;
        }
    } 

    cout << s2 << endl;
}
  