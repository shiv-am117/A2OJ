#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
	int pos,i;
	cin>>pos;
	int a,b;
	for(int i=0;i<3;i++){
		cin>>a>>b;
		if(a==pos) pos=b;
		else if(b==pos) pos=a;
	}
	cout<<pos;
}
