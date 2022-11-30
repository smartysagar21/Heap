#include <bits/stdc++.h>

using namespace std;

int main () {
	int n,k;
	cin>>n>>k;

	int a[n];
	for(int i=0; i<n; i++)cin>>a[i];

	priority_queue<int, vector<int>, greater<int>>minh;
	vector<int>v;
	for(int i=0; i<n; i++){
		minh.push(a[i]);

		if(minh.size()>k){
			v.push_back(minh.top());
			minh.pop();
		}
	}

	while(minh.size()){
		v.push_back(minh.top());
		minh.pop();
	}

	for(auto i:v){
		cout<<i<<" ";
	}
	
	return 0;
}