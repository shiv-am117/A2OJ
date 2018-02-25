#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t,i,time,jokes;
	cin>>n>>t;
	int a[n];
	for(i=0;i<n;i++) cin>>a[i];
		time=accumulate(a,a+n,0)+10*(n-1);
	if(time>t){cout<<-1; return 0;}
		jokes=2*(n-1);
		jokes=jokes+(t-time)/5;
		cout<<jokes;
}