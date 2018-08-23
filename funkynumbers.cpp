#include<bits/stdc++.h>
using namespace std;



int main(){
	int n,i,j,temp,sr;
	cin>>n;
	n*=2;
	for(i=1;i<=sqrt(n);i++){
		temp=n-(i*(i+1));
		if(temp==0) {
			cout<<"NO";
			return 0;
		}
		sr=sqrt(temp);
		if(sr*(sr+1)==temp) {
		cout<<"YES";
		return 0;
	}
	}
	cout<<"NO";
}
