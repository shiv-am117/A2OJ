#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int pos,t=-1;
	pos=s.find("WUB");
	while(pos>=0){
	
		
		s.erase(pos,3);

		if((pos!=t+1&&pos!=t)&&pos!=0) {t=pos; s.insert(pos," ");}
		
		pos=s.find("WUB");
		

	}
	cout<<s;
}