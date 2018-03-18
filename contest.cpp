#include<bits/stdc++.h>
using namespace std;
int main(){
	double a,b,c,d,p1,p2;
	cin>>a>>b>>c>>d;
	p1=max(3*a/10,a-a/250*c);
	p2=max(3*b/10,b-b/250*d);
	if(p1>p2) cout<<"Misha";
	else if(p1<p2) cout<<"Vasya";
	else cout<<"Tie";
}