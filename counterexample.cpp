#include<bits/stdc++.h>
using namespace std;
int main(){
long long l,h,i;
cin>>l>>h;
if(l%2!=0) l=l+1;
if(l+2>h) cout<<-1;
else cout<<l<<" "<<l+1<<" "<<l+2;
}