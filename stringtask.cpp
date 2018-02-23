#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int i,l=s.length();
for(i=0;i<l;i++){
	if(s[i]>=65&&s[i]<=90) s[i]=s[i]+32;
	if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'){ s.erase(i,1); i--;}

}
for(i=0;i<s.length();i++){
	cout<<'.';
	cout<<s[i];
}
}