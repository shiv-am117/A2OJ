#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,v,i,j,c=0;
	cin>>n>>v;
	vector<int> c1;
	int t;
	for(i=0;i<n;i++){
		cin>>t;
		int a[t];
		for(j=0;j<t;j++) cin>>a[j];
			if(v>*min_element(a,a+t)){c++; c1.push_back(i+1);}
	}
	cout<<c<<endl;
	for(i=0;i<c1.size();i++) {
		cout<<c1[i]<<" ";
	}
}