#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

class Student{
public:
    string name;
    int Roll_Number;

    Student(){
        cout << "Constructor Is Called: ";
    }

    Student(Student *B){
        name = B -> name;
        Roll_Number = B ->Roll_Number;
    }
    void Display(){
        cout << name << " " << Roll_Number;
    }
};

void solve() {
    Student *S1 = new Student(); // Constructor called here
    S1 -> name = "SHIVAM";
    S1 -> Roll_Number = 319;

    Student *S2 = S1; // S2 points to the same object as S1, no constructor called here

    S1 -> Roll_Number = 003;

    S2 -> Display(); // This will display the updated Roll_Number (318)

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
