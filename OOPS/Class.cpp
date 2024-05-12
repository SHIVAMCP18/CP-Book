#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

class Student{

public: // Access Modifier 
    //Without Using the Access Modifier We Cannot Use it from outside the class
    string name;
    int age;
    char grade;

    // Function to assign the values..
    void SetName(string s){
        name = s;
    }
    void SetAge(int n){
        age = n;
    }
    void SetGrade(char c){
        grade = c;
    }
};

void solve() {
    Student S1; // Object = S1
    S1.name = "SHIVAM";
    S1.age = 18;
    S1.grade = 'A';

    cout << S1.name;
    cout << endl;

    Student S2;
    S2.SetName("SATYAM");
    S2.SetAge(18);
    S2.SetGrade('A');
    cout << S2.name; // Using the Function
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    //cin >> t;
    while(t--)
       solve();
}