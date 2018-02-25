#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t,i,f,c=0;
	cin>>n>>t;
	int a[n];
	for(i=0;i<n;i++) cin>>a[i];
		f=5-t;
	for(i=0;i<n;i++){if(a[i]<=f) c++;}
	cout<<c/3;
}