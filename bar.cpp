#include<bits/stdc++.h>
using namespace std;
bool number(string s){
	for(int i=0;i<s.length();i++){
		if(!isdigit(s[i])) return false;
	}
	return true;
}
int main(){
	int n,i,ans=0;
	cin>>n;
	string s[n];
	for(i=0;i<n;i++) cin>>s[i];
	for(i=0;i<n;i++){
		if(number(s[i])&&stoi(s[i])<18) ans++;
		else{
			if(s[i]=="ABSINTH"||s[i]=="BEER"||s[i]=="BRANDY"||s[i]=="CHAMPAGNE"||s[i]=="GIN"||s[i]=="RUM"||s[i]=="SAKE"||s[i]=="TEQUILA"||s[i]=="VODKA"||s[i]=="WHISKEY"||s[i]=="WINE")
			ans++;
		}
	}
	
	cout<<ans;
	
}
