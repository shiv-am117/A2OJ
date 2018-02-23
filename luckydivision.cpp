#include<bits/stdc++.h>
using namespace std;
int main(){
	string n;
	cin>>n;
	int flag=0;
	
	if(n.find_first_not_of("47")>n.length()) flag=1;

	if(flag==0) cout<<"YES";
	else if(flag==1&&(((stoi(n)%4==0)&&(stoi(n)/4)%2==0)||(stoi(n)%7==0)&&(stoi(n)/7)%2==0)) cout<<"YES";
	else cout<<flag;
}
