#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i,c=0;
	cin>>n>>m;
	i=n*m;
	while(i>0){
		i=i-(1+n-1+m-1);
		c++;
		n=n-1;m=m-1;
	}
	if(c%2==0)cout<<"Malvika";
	else cout<<"Akshat";
}