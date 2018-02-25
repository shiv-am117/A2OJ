#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,p,t=-1;
	cin>>n>>p;
	if(n%2==1) n=n+1;
	if(p>n/2) {p=p-n/2; t=0;}
	cout<<p*2+t;
	
}