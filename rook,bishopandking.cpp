#include<bits/stdc++.h>
using namespace std;
int main(){
	int r1,c1,r2,c2;
	cin>>r1>>c1>>r2>>c2;
	int ans1,ans2,ans3;
	if(r1==r2||c1==c2) ans1=1;
	else ans1=2;
	ans3=max(abs(r1-r2),abs(c1-c2));
	if(((r1+c1)%2)!=((r2+c2)%2)) ans2=0;
	else if(abs(r1-r2)==abs(c1-c2)) ans2=1;
	else ans2=2;
	cout<<ans1<<" "<<ans2<<" "<<ans3;
		
	
	
}
