#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,k,i,j,a,b;
cin>>n>>m>>k;
vector<vector<bool> >seat(n);
for(i=0;i<n;i++) seat[i].resize(m);
for(i=0;i<k;i++){j=1;
	cin>>a>>b;
	if(seat[a-1][b-1]==0) {
	cout<<a<<" "<<b<<endl;
	seat[a-1][b-1]=1;
	}
	else{
		while(true){
			if(b-j>=1&&seat[a-1][b-j-1]==0) {
				cout<<a<<" "b-j<<endl;
				seat[a-1][b-j-1]=1;
				break;
			}
			else if(b+j<=m&&seat[a-1][b+j-1]==0) {
				cout<<a<<" "b+j<<endl;
				seat[a-1][b+j-1]=1;
				break;
			}
				else if(a-j>=1&&seat[a-j-1][b-1]==0) {
				cout<<a-j<<" "b<<endl;
				seat[a-j-1][b-1]=1;
				break;
			}
				else if(a+j<=n&&seat[a+j-1][b-1]==0) {
				cout<<a+j<<" "b<<endl;
				seat[a+j-1][b-1]=1;
				break;
			}
		}
	}
}
}
