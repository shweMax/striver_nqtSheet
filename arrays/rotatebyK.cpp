#include<bits/stdc++.h>
using namespace std;
vector<int> rotatebyK(vector<int>arr, int k){
    int n= arr.size();
    k = k % n;
    if(k==0) return arr;
    vector<int> temp(k);
    for(int i=0; i<k; i++){
        temp[i]= arr[i];
    }
    for(int i=k; i<n; i++){
        arr[i-k]=arr[i];
    }
    for(int i=n-k; i<n; i++){
        arr[i]=temp[i-(n-k)];
    }
    return arr;
}
int main(){
    int n, k;
    cout<<"Enter n: ";
    cin>>n;
    cout<<endl;
    cout<<"Enter k: ";
    cin>>k;

    vector<int>arr(n);
    cout<<"Enter arr: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    arr= rotatebyK(arr, k);
    cout<<"The rotated array by "<<k<<" is: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}