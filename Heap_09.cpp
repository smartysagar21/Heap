#include<bits/stdc++.h>

using namespace std;

int smallest(int a[], int n, int k){
	priority_queue<int>maxh;
	for(int i=0; i<n; i++){
		maxh.push(a[i]);

		if(maxh.size()>k)maxh.pop();
	}

	return maxh.top();
}

int largest(int a[], int n, int k){
	priority_queue<int>maxh;
	for(int i=0; i<n; i++){
		maxh.push(a[i]);

		if(maxh.size()>k)maxh.pop();
	}

	return maxh.top();

	
}

int main () {
	int n,k1,k2;
	cin>>n>>k1>>k2;

	int a[n];
	for(int i=0; i<n; i++)cin>>a[i];

	int first=smallest(a,n,k1);
	int second=largest(a,n,k2);

	cout<<first<<" "<<second<<endl;

	int ans=0;
	for(int i=0; i<n; i++){
		if(a[i]>first && a[i]<second){
			ans+=a[i];
		}
	}

	cout<<ans<<endl;

	return 0;
}