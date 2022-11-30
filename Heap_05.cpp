#include <bits/stdc++.h>

using namespace std;

int main () {
	int n,k;
	cin>>n>>k;

	int a[n];
	unordered_map<int,int>m;
	for(int i=0; i<n; i++){
		cin>>a[i];
		m[a[i]]++;
	}
	priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>minh;

	for(auto i=m.begin(); i!=m.end(); i++){
		minh.push({i->second,i->first});

		if(minh.size()>k){
			minh.pop();
		}
	}
	while(minh.size()){
		cout<<minh.top().second<<" ";
		minh.pop();
	}
	
	return 0;
}