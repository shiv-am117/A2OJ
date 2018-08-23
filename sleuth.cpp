#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	char c;
	getline(cin,s);
	for(int i=s.length()-2;i>=0;i--){
		if(s[i]!=' '){
		
		c=s[i];
		break;}
	}
	c=tolower(c);
	if(c=='a'||c=='e'||c=='o'||c=='u'||c=='y') cout<<"YES";
	else cout<<"NO";
}
