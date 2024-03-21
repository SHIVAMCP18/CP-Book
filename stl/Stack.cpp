#include<bits/stdc++.h>
using namespace std;

int main(){
	stack<int> s;
	int n;
	cin >> n;
  
	for(int i = 0; i< n ; i++){ //Input for Stack
		int x;                                            |        x4        |
		cin >> x;                                         |        x3        |
		s.push(x);                                        |        x2        |
	}                                                   |________x1________|
  
	while(!s.empty()){
		cout << s.top() << endl;   // top-element = x4
		s.pop();        //Remove the top element 
	}
  
}
