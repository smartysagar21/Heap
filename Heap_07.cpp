#include <bits/stdc++.h>

using namespace std;

int main () {
	int n,k;
	cin>>n>>k;

	int a[n][2];
	for(int i=0; i<n; i++){
		for(int j=0; j<2; j++){
			cin>>a[i][j];
		}
	}

	priority_queue<pair<int,pair<int,int>>>maxh;
	for(int i=0; i<n; i++){
		maxh.push({a[i][0]*a[i][0]+a[i][1],{a[i][0],a[i][1]}});

		if(maxh.size()>k){
			maxh.pop();
		}

	}

	while(maxh.size()){
		cout<<maxh.top().second.first<<" "<<maxh.top().second.second<<endl;
		maxh.pop();
	}
	return 0;
}