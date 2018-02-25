#include<bits/stdc++.h>
using namespace std;
int main(){
	string n;
	cin>>n;
	int l;
	if(stoi(n)>=0) {cout<<n; return 0;}
	l=n.length();
	if(n[l-2]>n[l-1])n.erase(l-2,1); 
	else n.erase(l-1,1);
	if(n[1]=='0'&&n[0]=='-') n.erase(0,1); 
	cout<<n;
}