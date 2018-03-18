#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i,c,ans=0;
	cin>>n>>m;
	string s[n];
	for(i=0;i<n;i++) cin>>s[i];
		for(i=0;i<n;i++){
			c=0;
			c=c+count(s[i].begin(), s[i].end(),'4')+count(s[i].begin(), s[i].end(),'7');
			if(c<=m) ans++;
		}
		cout<<ans;
}