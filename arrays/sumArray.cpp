#include<bits/stdc++.h>
using namespace std;
int sumArr(vector<int> &arr){
    int n= arr.size();
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    vector<int>arr(n);

    cout<<"Enter arr: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int sum= sumArr(arr);
    cout<<"Sum of the array: "<<sum<<endl;
}