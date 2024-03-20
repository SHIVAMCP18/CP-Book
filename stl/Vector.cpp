#include<bits/stdc++.h>
using namespace std;
	
void PrintVec(vector<int> v){
	for(int i=0 ; i < v.size() ; i++){
		cout << v[i]<<" " ;
	}
	cout << endl;
}

int main(){
	//vector
	int n;
	cin >> n;

	vector<int> v;

	for(int i=0 ; i < n ; i++){ //(Vector Input)
		int x;
		cin >> x;

		v.push_back(x); // O(1)	
	}

	PrintVec(v); //(Method-1 for printing vector)

	vector<int> :: iterator it; //(Method-2)
	for(it = v.begin() ; it!=v.end() ; it++){
		cout << (*it) <<" ";
	}

	cout << endl;

	for(int ele : v){  //(Method-3)
		cout << ele <<" ";
	}

	cout << endl;

	for(auto ele : v){ //(Method-4)
		cout << ele << " ";
	}
}
