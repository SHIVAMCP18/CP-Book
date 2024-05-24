/* You have the following constraints: 
   1) Only one disk can be moved at a time.
   2) Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack i.e. a disk can only be moved if it is the uppermost disk on a stack.
   3) No disk may be placed on top of a smaller disk.
*/

// TC is O(2^N)
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void Tower_Of_Hanoi(int N , int From , int To , int Auxilary){

    if(N == 1){
        cout << "Move Disk " << N << " From Rod " << From << " To Rod " << To << endl;
        return;
    }

    Tower_Of_Hanoi(N - 1 , From , Auxilary , To);

    cout << "Move Disk " << N << " From Rod " << From << " To Rod " << To << endl;
    
    Tower_Of_Hanoi(N - 1 , Auxilary , To , From);
}

void solve() {
    int n;
    cin >> n;
    Tower_Of_Hanoi(n , 1 , 2 , 3);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T = 1;
    //cin >> T;
    while (T--)
        solve();
}
