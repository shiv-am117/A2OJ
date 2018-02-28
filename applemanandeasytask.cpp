#include<bits/stdc++.h>
using namespace std;
int main(){

	int n,i,flag=1,t,j,k,c=0;
	cin>>n;
	string s[n];
	for(i=0;i<n;i++) cin>>s[i];
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){c=0;
				if(i!=n-1&&s[i+1][j]=='o') c++;
				if(i!=0&&s[i-1][j]=='o') c++;
				if(j!=n-1&&s[i][j+1]=='o') c++;
				if(j!=0&&s[i][j-1]=='o') c++;
				if(c%2!=0) break;
			}
			if(j!=n)break;
		}
		if(j==n&&i==j) cout<<"YES";
		else cout<<"NO";

}