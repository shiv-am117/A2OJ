#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	string s[n];
	list<string> z,nz;
	cin>>n;
	for(i=0;i<n;i++) cin>>s[i];
	for(i=0;i<n;i++){
		if(count(s[i].begin(),s[i].end(),'0')>0) z.push_back(s[i]);
		else nz.push_back(s[i]);
	}
	int min1=min(z.size(),nz.size());
	int max1=max(z.size(),nz.size());
	int ans=2*min1;
	if(max1==z.size()) ans+=max1-min1;
	cout<<ans<<endl;
	list<string>::iterator it1,it2;
	for(it1=z.begin(),it2=nz.begin();it1!=z.end()&&it2!=nz.end();it1++,it2++) cout<<*it1<<" "<<*it2;
	while(it1!=z.end()&&next(it1)!=z.end()){
		cout<<*it1<<" "<<*(next(it1));
		it1=(next(it1))++;
	}
}
