#include <iostream>
using namespace std;

int main() {
	int T,G;
	cin>>T;
	while(T--){
	    cin>>G;
	    while(G--){
	        int N,I,Q;
	        cin>>N>>I>>Q;
	        if(I%2==0)
	            cout<<I/2<<endl;
	        else{
	            if(N==Q){
	                cout<<I/2<<endl;
	            }
	            else{
	                cout<<I/2+1<<endl;
	            }
	        }
	        
	    }
	}
	return 0;
}