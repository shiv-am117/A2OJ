#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int n,l=s.length(),i;
	sort(s.begin(),s.end());
if(l==2)s.erase(0,1);
else if(l!=1) s.erase(0,l/2);
for(i=0;i<s.length();i++){
	cout<<s[i];
	if(i!=s.lenght()-1) cout<<'+';
}
}