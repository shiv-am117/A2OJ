#include<bits/stdc++.h>
using namespace std;
   int main()
    {
    	int n,m,i,max,j;
    	set<int> stu;
    	vector<int>stu1;
    	cin>>n>>m;
    	string s[n];
    	for(i=0;i<n;i++) cin>>s[i];
    	

    		for(i=0;i<m;i++){max=0;
    			for(j=0;j<n;j++){
    				if(s[j][i]>max){max=s[j][i];stu1.clear();stu1.push_back(j);}
    				else if(s[j][i]==max){ stu1.push_back(j);}
    				
    			}
    			stu.insert(stu1.begin(), stu1.end());
    			
    		}
    		cout<<stu.size();
    }