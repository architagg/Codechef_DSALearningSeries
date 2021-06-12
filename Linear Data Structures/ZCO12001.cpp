#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;
	cin>>t;
	ll arr[t];
	for(ll i=0;i<t;i++)
		cin>>arr[i];
	stack<ll> st;
	ll ms=0,fst=0,length=0,first=0;
	ll count=0;
	for(ll i=0;i<t;i++){
		if(arr[i]==1)
			st.push(arr[i]);
		else if(arr[i]==2 && st.top()==1)
			st.pop();
		if(st.size()>ms){
			ms=st.size();
			fst=i+1;
	}
			count++;
		if(st.size()==0){
			if(length<count){
				length=count;
				first=i-length+2;
			}
			count=0;
			}
		
	}
	cout<<ms<<" "<<fst<<" "<<length<<" "<<first;
	return 0;
}
