#include<bits/stdc++.h>
using namespace std;

   int main()
    {
    	string s;long long i,left=0,right=0;
    	cin>>s;
    	long long l=distance(s.begin(),find(s.begin(),s.end(),'^'));
    	for(i=0;i<s.length();i++){
    		if(i<l&&s[i]>=48&&s[i]<=57) left+=(s[i]-'0')*(l-i);
    		else if(i>l&&s[i]>=48&&s[i]<=57) right+=(s[i]-'0')*(i-l);
    	}
    	if(left==right) cout<<"balance";
    	else if(right<left) cout<<"left";
    	else cout<<"right";
    }