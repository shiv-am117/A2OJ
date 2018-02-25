#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	int sum1=0,sum2=0,sum3;
	sum1=n*a;
	if(a*m<=b){ cout<<sum1; return 0;}
	sum2=n/m*b+b;
	sum3=n/m*b+n%m*a;
	cout<<min(sum2,sum3);
}