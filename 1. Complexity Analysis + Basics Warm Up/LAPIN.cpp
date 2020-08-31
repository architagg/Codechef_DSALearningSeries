#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    string s1,s2;
	    int n = s.length();
	    if((n%2)==0){
	        s1 = s.substr(0,n/2);
	        s2 = s.substr(n/2,n);
	    }
	else{
	    s1 = s.substr(0,n/2);
	    s2 = s.substr((n/2)+1,n);
	}
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	if(s1.compare(s2)==0)
	    cout<<"YES"<<endl;
	else
	    cout<<"NO"<<endl;
	}
	return 0;
}