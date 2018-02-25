#include<bits/stdc++.h>
using namespace std;
int main(){
	float n,m,a,b;
	cin>>n>>m>>a>>b;
	float sum1=0,sum2=0;
	sum1=n*a;
	sum2=ceil(b/m);
	sum2=sum2*n;
	if(sum1<sum2) cout<<(int)ceil(sum1);
	else cout<<(int)ceil(sum2);
}