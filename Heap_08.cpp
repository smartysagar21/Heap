#include <bits/stdc++.h>

using namespace std;

int main () {
	int n;
	cin>>n;

	int a[n];
	for(int i=0; i<n; i++)cin>>a[i];

	priority_queue<int, vector<int>, greater<int>>minh;
	for(int i=0; i<n; i++)minh.push(a[i]);

	int ans=0;

	while(minh.size()>=2){
		int first=minh.top();
		minh.pop();
		int second=minh.top();
		minh.pop();

		ans+=first+second;
		minh.push(first+second);
	}

	cout<<ans<<endl;

	return 0;
}