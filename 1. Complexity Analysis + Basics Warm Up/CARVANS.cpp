#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,res=1;
	    cin>>n;
	    int arr[n];
	    for (int i=0; i < n; i++ ){
	        cin>>arr[i];
	    }
	    for (int j=1; j < n; j++ ){
	        if(arr[j]<=arr[j-1]){
	            res++;
	        }
	        else{
	            arr[j] = arr[j-1];
	        }
	}
	cout<<res<<endl;
}
return 0;
}