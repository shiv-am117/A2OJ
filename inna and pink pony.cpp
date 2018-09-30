#include<bits/stdc++.h>
using namespace std;
int findmin(int n,int m,int i,int j,int a,int b){
	int diffi=abs(i-n);
	int diffj=abs(j-m),min1,min2;
	if(diffi%a==0&&diffj%b==0) {
	min1=diffi/a;
	 min2=diffj/b;
	 }
	 else return INT_MAX;
	 
	if(min1%2==min2%2) return max(min1,min2);
	else return INT_MAX;
}
int main(){
	int n,m,i,j,a,b;
	cin>>n>>m>>i>>j>>a>>b;
	if(i==n&&j==m){
		cout<<0;
		return 0;
	}
		if(i==1&&j==m){
		cout<<0;
		return 0;
	}
		if(i==1&&j==1){
		cout<<0;
		return 0;
	}
		if(i==n&&j==1){
		cout<<0;
		return 0;
	}
	if(i+a>n&&i-a<1){
		cout<<"Poor Inna and pony!";
		return 0;
	}
	if(j+b>m&&j-b<1){
		cout<<"Poor Inna and pony!";
		return 0;
	}
	int a1=findmin(n,m,i,j,a,b);
	int b1=findmin(1,m,i,j,a,b);
	int c1=findmin(n,1,i,j,a,b);
	int d1=findmin(1,1,i,j,a,b);
	int ans=min(min(a1,b1),min(c1,d1));
	if(ans==INT_MAX) cout<<"Poor Inna and pony!";
	else cout<<ans;
}
