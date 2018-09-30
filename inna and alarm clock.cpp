#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	int x[n],y[n];
	for(i=0;i<n;i++){
		cin>>x[i]>>y[i];
	}
	map<int,int>x1,y1;
	for(i=0;i<n;i++){
		x1[x[i]]++;
		y1[y[i]]++;
	}
	int ans1=x1.size(),ans2=y1.size();
	cout<<min(ans1,ans2);
}
