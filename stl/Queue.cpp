#include<bits/stdc++.h>
using namespace std;


int main(){
	queue<string> q;

	int n;
	cin >> n;

	for(int i = 0; i< n ; i++){
		string s;
		cin >> s;

		q.push(s);
	}

	while(!q.empty()){
		cout << q.front() << endl;
		q.pop();
	}

}