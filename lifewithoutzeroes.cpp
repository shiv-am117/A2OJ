#include<bits/stdc++.h>
using namespace std;
   int main()
    {
    	string a,b;
    	cin>>a>>b;
    	int i,j,carry=0,r,c;
    	int l1=a.length(),l2=b.length();
    	for(i=l1-1,j=l2-1;i>=0&&j>=0;i--,j--){c=0;
		r=a[i]-'0'+b[j]-'0'+carry;
		if(r>10) {c=1;r=r-10;}
		if(r==10) break;
		if((a[i]=='0'&&b[j]!='0')||(b[j]=='0'&&a[i]!='0')) break;
		if(a[i]=='0'&&b[j]=='0'&&carry!=0) break;
		carry=c;
		cout<<r;
		
	}
    if(i<0||j<0) cout<<"YES";
    else cout<<"NO";
    	
    	
    }