#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int n ,count = 0;
	    cin>>n;
	    for( int i =5 ; (n/i) >= 1 ; i*=5){
	        count +=  (n/i);
	    }
	    cout<<count<<endl;
	}
	return 0;
}
