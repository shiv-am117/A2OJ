#include<bits/stdc++.h>
using namespace std;
   int main()
    {
    	int i;
    	string s;
    long long n;
    cin>>n;
    int c=0;
    while(true){
    n++;
    c++;
    
    s=to_string(n);
    if(count(s.begin(), s.end(),'8')!=0) break;
  }
  cout<<c;
    }