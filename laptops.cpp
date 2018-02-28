#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	pair<int,int> a[n];
	for(i=0;i<n;i++){cin>>a[i].first;cin>>a[i].second;}
		sort(a,a+n);
	for(i=0;i<n-1;i++) {
		if(a[i].second>a[i+1].second){
			cout<<"Happy Alex";
			return 0;
		}}
		cout<<"Poor Alex";
}