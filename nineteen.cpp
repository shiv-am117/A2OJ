#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int i;
	vector<int> count(4);
	for(i=0;i<s.length();i++){
		if(s[i]=='n') count[0]++;
		else if(s[i]=='i') count[1]++;
		else if(s[i]=='e') count[2]++;
		else if(s[i]=='t') count[3]++;
		
}
	if(count[0]<3) count[0]=0;
	else if(count[0]==3) count[0]=1;
	else count[0]=(count[0]-3)/2+1;
	count[2]/=3;
	cout<<*min_element(count.begin(),count.end());
	
}
