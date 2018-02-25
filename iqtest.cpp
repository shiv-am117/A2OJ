#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,pos;
	cin>>n;int a[n];
	for(i=0;i<n;i++) {cin>>a[i]; a[i]=a[i]%2;}
		if(count(a,a+n,1)==1) cout<<distance(a,find(a,a+n,1))+1;
	else cout<<distance(a,find(a,a+n,0))+1;

}