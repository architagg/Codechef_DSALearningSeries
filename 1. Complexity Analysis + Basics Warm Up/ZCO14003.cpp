#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	long long int n;
	cin>>n;
	long long int arr[n];
	for(long long int i=0;i<n;i++){
	    long long int ele;
	    cin>>ele;
	    arr[i] = ele;
	    
	}
	sort(arr,arr+n);
	reverse(arr,arr+n);
	long long int res=0;
	for (long long int j= 0 ; j<n ; j++){
	    long long int req = arr[j];
	    res = max(res , req*(j+1));
	}
	cout<<res;
	
	return 0;
}