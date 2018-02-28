#include<bits/stdc++.h>
using namespace std;
int main(){
int d,l;
cin>>d>>l;
int a[d],i;
for(i=0;i<d;i++) cin>>a[i];
	int max=0;
	for(i=0;i<d-1;i++)
		if(a[i]-a[i+1]>max) max=a[i]-a[i+1];
	if(max-l<=0) cout<<0;
	else cout<<max-l;
}