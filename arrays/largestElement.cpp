#include<bits/stdc++.h>
using namespace std;
int largestElement(vector<int> arr){
    int largest= arr[0];
    for(int i=1; i<arr.size(); i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    // vector<int> v;

    // for(int i=0; i<n; i++){
    //     int element;
    //     cin>>element;
    //     v.push_back(element);
    // }

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    int lar= largestElement(v);
    cout<<"The largest element is: "<<lar<<endl;
}
