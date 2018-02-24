#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,min,max,pos1,pos2;
	cin>>n;
	int a[n],t;
	for(i=0;i<n;i++) cin>>a[i];
		min=*min_element(a,a+n);
	max=*max_element(a,a+n);
	pos1=distance(a,find(a,a+n,max));
	for(i=0;i<n;i++){
		if(a[i]==min) pos2=i; 
	}
	t=pos1+n-1-pos2;
	if(pos1>pos2) t=t-1;
	cout<<t;
}