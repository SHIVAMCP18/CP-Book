#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

class Engineer{
public:
    string Specialization;

    void Work(){
        cout << "I have Specialization in " << Specialization << endl;
    }
};

class Youtuber{
public:
    int subscribers;

    void ContentCreator(){
        cout << "I Have A Subscriber Base of " << subscribers << endl;
    }
};

class CodeTeacher : public Engineer , public Youtuber{
public:
    string name;

    CodeTeacher(string name , string Specialization , int subscribers){
        this -> name = name;
        this -> Specialization = Specialization;
        this -> subscribers = subscribers;
    }

    void Display(){
        cout << "My Name Is " << name << endl;
        Work();
        ContentCreator();
    }
};

void solve(){
    CodeTeacher A1("SHIVAM" , "CSE" , 2);
    A1.Display();
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
