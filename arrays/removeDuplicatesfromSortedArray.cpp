// Remove duplcates from the sorted array
#include<bits/stdc++.h>
using namespace std;
int RemoveDuplicates(vector<int> &arr){
    set<int> set;
    for(int i=0; i<arr.size(); i++){
        set.insert(arr[i]); //set is a container that stores unique values in ascending order.
    }
    int k= set.size();
    int j=0;
    for(auto it:set){
        arr[j++]=it;
    }
    return k;
}
int RemoveDuplicatesOptimal(vector<int> &arr){
    int i=0;   //Using 2 pointer approach
    for(int j=1; j<arr.size(); j++){
        if(arr[j]!=arr[i]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}

vector<int> RemoveDuplicatesII(vector<int> &arr){
    //Suppose you were given an unsorted array and asked to remove the duplicates and provide the output array in sorted order. 
    sort(arr.begin(), arr.end());
    set<int>set;
    for(int i=0; i<arr.size(); i++){
        set.insert(arr[i]);
    }
    arr.clear(); //I just want to return the non duplicate array in sorted order.
    for(auto it:set){
        arr.push_back(it);
    }
    
    return arr;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter arr: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k= RemoveDuplicatesOptimal(arr);
    cout<<"The k is: "<<k<<endl;
}