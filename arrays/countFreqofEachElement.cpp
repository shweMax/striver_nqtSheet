#include<bits/stdc++.h>
using namespace std;
void countFreq(vector<int> arr){
	int n= arr.size(); 
	int hash[n+1]= {0}; //using hash array
	for(int i=0; i<n; i++){
		hash[arr[i]]++;
	}
	for(int i=1; i<=n; i++){
		cout<<i<<"->"<<hash[i]<<endl;
	}
    //TC- O(N)
}
void countFreq2(vector<int> arr){
	int n= arr.size();
	unordered_map <int,int> hash; //using unordered_map 
	for(int i=0; i<n; i++){
		hash[arr[i]]++;
	}
	for(auto it: hash){
		cout<<it.first<<"->"<<it.second<<endl;
	}	
    //TC- O(1)
}
int main(){
	int n;
	cout<<"Enter n: ";
	cin>>n;
	
	vector<int>v(n);
	
	for(int i=0; i<n; i++){
		cin>>v[i];
	}
	
	countFreq(v);
}
