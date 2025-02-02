#include<bits/stdc++.h>
using namespace std;

int secondSmallest(vector<int>arr){
	int secondSmallest;
	int smallest= INT_MAX;
	for(int i=0; i<arr.size(); i++){
		if(arr[i]<smallest){
			secondSmallest= smallest;
			smallest=arr[i];
		}
		else if(arr[i]>smallest && arr[i]<secondSmallest){
			secondSmallest=arr[i];
		}	
	}
	return secondSmallest;
}
int secondLargest(vector<int>arr){
	int slargest; // 1 2 3 4 7 5
	int largest= INT_MIN;
	for(int i=0; i<arr.size(); i++){
		if(arr[i]>largest){
			slargest=largest;
			largest=arr[i];
		}
		else if(arr[i]<largest && arr[i]>slargest){
			slargest=arr[i];
		}
	}
	return slargest;
}
int main(){
	int n;
	cout<<"Enter the number of elements: "; 
	cin>>n;
	
	vector<int>arr(n);
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int ss= secondSmallest(arr);
	int sl= secondLargest(arr);
	cout<<"The second smallest element in this array is: "<<ss<<endl;
	cout<<"The second largest element in this array is: "<<sl<<endl;
}
