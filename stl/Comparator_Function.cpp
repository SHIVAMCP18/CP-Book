#include<bits/stdc++.h>
using namespace std;


bool cmp(pair<int,string> a,pair<int,string> b){
	if(a.first!=b.first) {
		return a.first>b.first;
	}
	return a.second<b.second;
	
}
int main(){
	int n;
	cin>>n;

	vector<pair<int,string>> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i].second>>a[i].first;
	}

	sort(a.begin(),a.end(),cmp);

	for(int i=0;i<n;i++){
		cout<<a[i].second<<" "<<a[i].first<<endl;
	}
	cout<<endl;
}
