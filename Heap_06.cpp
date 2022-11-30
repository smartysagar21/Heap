#include <bits/stdc++.h>

using namespace std;

int main () {
	int n;
	cin>>n;

	int a[n];
	unordered_map<int,int>m;
	for(int i=0; i<n; i++){
		cin>>a[i];
		m[a[i]]++;
	}
	priority_queue<pair<int,int>>maxh;

	for(auto i=m.begin(); i!=m.end(); i++){
		maxh.push({i->second,i->first});
	}

	while(maxh.size()){
		int x=maxh.top().first;
		int y=maxh.top().second;

		for(int i=1; i<=x; i++){
			cout<<y<<" ";
		}
		maxh.pop();
	}

	
	return 0;
}