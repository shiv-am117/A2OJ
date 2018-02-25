#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int t=2;
	
	sort(s.begin(),s.end());
	s.erase(unique(s.begin(),s.end()),s.end());
	if(binary_search(s.begin(),s.end(),' ')) t=4;
	cout<<s.length()-t;
}