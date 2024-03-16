	#include<bits/stdc++.h>
	using namespace std;

	int main(){
		int n;
		cin>>n;
		int a[n];

		for(int i = 0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
		int *ptr = lower_bound(a,a+n,10);//location of the elements..
		if(ptr == (a+n)) {
			cout<<"Not Found";
			return 0;
		}
		cout <<(*ptr) <<endl;
}

//if search element is not in the array then it returns the next grater element ..ex) 3 5 6 87 90 if search element = 7 then it returns 87

//ex..4 5 6 7 8 25
//if search element = 26 then it returns nth position to the pointer and it gives the garbage value
