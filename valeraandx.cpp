#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,k=0,c=0;
	cin>>n;
	int l=n*n-n-n+1;
	string s[n];
	for(i=0;i<n;i++) cin>>s[i];
	for(i=0;i<n;i++){
		c=c+count(s[i].begin(),s[i].end(),s[0][1]);
		if(s[i][k]!=s[i][n-k-1]||s[i][k]!=s[0][0]) break;
		k++;
	}
	if(i!=n||c!=l) {cout<<"NO"; return 0;}
	cout<<"YES";

}