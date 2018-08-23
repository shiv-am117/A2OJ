#include<bits/stdc++.h>
using namespace std;
int main(){
	 freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
	int n,i;
	string s;
	cin>>n>>s;
	int skip=n/2;
	for(i=0;i<n/2;i++){
		if(s[i]==s[i+skip]) cout<<i+1<<" "<<i+skip+1<<endl;
		else if(s[i]=='L'&&s[i+skip]=='R') cout<<i+1<<" "<<i+skip+1<<endl;
		else cout<<i+skip+1<<" "<<i+1<<endl;
	}
	
}
