#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

class Student{

public:
    string name;
    int age;
    char grade;

};

void solve() {
    // Dynamic Memory Allocation
    Student *S1 = new Student();
    S1 -> name = "SRPC";
    S1 -> age = 18;
    S1 -> grade = 'A';

    cout << S1 -> name << " ";
    cout << S1 -> age << " ";
    cout << S1 -> grade << " ";
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