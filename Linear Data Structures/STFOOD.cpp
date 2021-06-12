#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int s[n],v[n],p[n];
	    int profit=-1;
	    for(int i=0;i<n;i++)
	    {
	        cin>>s[i]>>p[i]>>v[i];
	        s[i]++;
	        int l=p[i]/s[i];
	        int d=l*v[i];
	        profit=max(profit,d);
	    }
	    cout<<profit<<endl;
	
	
	}
	return 0;
}
