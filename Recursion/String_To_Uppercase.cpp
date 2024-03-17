#include <bits/stdc++.h>
using namespace std;

char Upper_Case(char c){
	return 'A' + (c - 'a');
}

int main(){

	while(true){
		string c;
		cin>>c;

		if(c.size()==0){
			break;
		}

	for(int i=0;i<c.size();i++){
		c[i]=Upper_Case(c[i]);
	}
	cout<< c << " ";
}

}
