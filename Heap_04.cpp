#include <bits/stdc++.h>

using namespace std;

int main () {
	int n,k;
	cin>>n>>k;

	int a[n];
	for(int i=0; i<n; i++)cin>>a[i];

	int x;
	cin>>x;

	priority_queue<pair<int,int>>maxh;

	for(int i=0; i<n; i++){
		maxh.push({abs(a[i]-x),a[i]});

		if(maxh.size()>k){
			maxh.pop();
		}
	}

	while(maxh.size()){
		cout<<maxh.top().second<<" ";
		maxh.pop();
	}
	
	return 0;
}