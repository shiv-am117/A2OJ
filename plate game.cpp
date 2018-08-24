#include<bits/stdc++.h>
using namespace std;
int main(){
int l,b,r,i,t;
cin>>l>>b>>r;
int l1=l,b1=b;
if(l<=2*r||b<=2*r) cout<<"Second";
int mod=l%(3*r);
int ans=l/(3*r);
if(mod>=2*r) {
	ans++;
	b-=2*r;
}
mod=b%(3*r);
ans+=b/(3*r);
if(mod>=2*r) ans++;


if(ans%2==0) cout<<"Second";
else cout<<"First";
}
