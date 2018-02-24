#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n],i,b[n];
	for(i=0;i<n;i++) cin>>a[i];
		for(i=0;i<n;i++){
			b[i]=distance(a,find(a,a+n,i+1));
		}
		for(i=0;i<n;i++) 
		cout<<b[i]+1<<" ";
}