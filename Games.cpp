#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,total=0;
	cin>>n;
	int a[n],b[n];
	for(i=0;i<n;i++){
		cin>>a[i];
		cin>>b[i];
	}
	for(i=0;i<n;i++){
		total=total+count(b,b+n,a[i]);
	}
	cout<<total;
}