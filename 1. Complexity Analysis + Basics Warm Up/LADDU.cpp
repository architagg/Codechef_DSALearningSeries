#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    long laddus = 0;
	    string indian;
	    cin>>n>>indian;
	    while(n--){
	        string s ;
	        cin>>s;
	        if(s == "TOP_CONTRIBUTOR"){
	            laddus+=300;
	            
	        }
	        if(s == "CONTENT_HOSTED"){
	            laddus+=50;
	            
	        }
	        int x;
	        if(s == "CONTEST_WON"){
	        cin>>x;
	        laddus +=300;
	        if(x<=20){
	            laddus+=(20-x);
	        }
	        }
	         if(s == "BUG_FOUND"){
	        cin>>x;
	        laddus +=x;
	    }
	    }
	    if(indian == "INDIAN"){
	        cout<<laddus/200<<endl;
	    }
	    else{
	        cout<<laddus/400<<endl;
	    }
	}
	
	return 0;
}
