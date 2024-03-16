#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<[](int a){return a+2;}(2)<<endl;
    auto sum = [](int x,int y){return x+y;};
    cout<<sum(2,3);
}
