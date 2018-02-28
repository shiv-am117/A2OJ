#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,c1=0,c2=0,c3=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++) cin>>a[i];
	for(i=0;i<n;i++){
		if(i%3==0) c1=c1+a[i];
		else if(i%3==1) c2=c2+a[i];
		else c3=c3+a[i];
	}	
	int c=max(c1,max(c2,c3));
	if(c==c1) cout<<"chest";
	else if(c==c2) cout<<"biceps";
	else cout<<"back";
}