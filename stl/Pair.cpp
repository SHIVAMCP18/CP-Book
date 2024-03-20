#include<bits/stdc++.h>
using namespace std;

void PrintVec(vector<pair<int,string>> &p1){
	for(int i=0 ; i<p1.size() ; i++){
		cout << p1[i].first << " " << p1[i].second <<endl;
	}
}

void PrintVec1(vector<pair<int,string>> p2){
	for(auto it=p2.begin() ; it!=p2.end() ; it++){
		cout << (it->first) << " " << (it->second) << endl;
	}
}
	
int main(){
	pair<int,string> p;

	p = {3,"abc"};
	cout << p.first << " " << p.second <<endl;

	p = make_pair(4,"xyz");
	cout << p.first << " " << p.second << endl;

	int n;
	cin>>n; 

	vector<pair<int,string>> p1(n);

	for(int i =0 ; i < p1.size() ; i++){
		cin >> p1[i].first >> p1[i].second;
	}

	PrintVec(p1);
	cout<<endl;
	PrintVec1(p1);
}
