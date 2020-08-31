#include <bits/stdc++.h> 
#define lli long long int
using namespace std;
int main() { 
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;cin>>T;
	while(T--) {
		lli d0,d1,k,sum=0,d2;
		cin>>k>>d0>>d1;
		if(k==2) {
			sum = d0 + d1;
			if(sum%3==0) cout<<"YES"<<"\n";
			else cout<<"NO"<<"\n";
		}
		else {
			lli noOfGroups = (k-3) / 4;
			lli leftGroups = (k-3) % 4;

			d2 = (d0 + d1) % 10;
			sum = d0 + d1 + d2;
			lli temp1 = (d2 * 2) % 10;
			lli temp2 = (d2 * 4) % 10;
			lli temp3 = (d2 * 8) % 10;
			lli temp4 = (d2 * 16) % 10;
			if(noOfGroups>=1) {
				sum = sum + ((temp1 + temp2 + temp3 + temp4)*noOfGroups);
			}
			if(leftGroups == 1) 
				sum = sum + temp1;
			if(leftGroups == 2) 
				sum = sum + temp1 + temp2;
			if(leftGroups == 3) 
				sum = sum + temp1 + temp2 + temp3;

			if(sum % 3 == 0) cout<<"YES"<<"\n";
			else cout<<"NO"<<"\n";
		}
	}
	return 0;
} 
