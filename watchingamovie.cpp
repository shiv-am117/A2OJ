#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,s,i,t=1,ans=0;
	cin>>n>>s;
	pair<int,int> time[n];
	for(i=0;i<n;i++) {
		cin>>time[i].first>>time[i].second;
	}
	for(i=0;i<n;i++){
		ans=ans+((time[i].first-t)%s);
		ans=ans+(time[i].second-time[i].first+1);
		t=time[i].second+1;
	}
	cout<<ans;
}