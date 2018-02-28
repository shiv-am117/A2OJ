#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,t,i,t1,f,max=-10000000000;
	cin>>n>>t;
	for(i=0;i<n;i++){
		cin>>f>>t1;
		if(t-t1<0) f=f+(t-t1);
		if(max<f) max=f;
		
	}
	cout<<max;
}