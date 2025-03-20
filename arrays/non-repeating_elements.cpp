#include <bits/stdc++.h>
using namespace std;
/*Example 1:
Input:
 Nums = [1,2,-1,1,3,1] //-1,1,1,1,2,3
Output:
 2,-1,3
Explanation:
 1 is the only element in the given array which occurs thrice in the array. -1,2,3 occurs only once and hence, these are non-repeating elements
 of the given array.

Example 2:
Input:
 Nums = [1,2,3]
Output:
 1,2,3
Explanation:
 All elements present in the array occur once. Hence, every element is non-repeating.*/
vector<int>findNonRepeatingElements(vector<int>&arr){
    int n= arr.size();
    vector<int>rep;
    sort(arr.begin(), arr.end());
    if(arr[0]!=arr[1]) rep.push_back(arr[0]);
    for(int i=1; i<n-1; i++){
        if(arr[i]!=arr[i-1] && arr[i]!=arr[i+1]){
            rep.push_back(arr[i]);
        }
    }
    if(arr[n-1]!=arr[n-2]) rep.push_back(arr[n-1]);

    return rep;
}
vector<int>findNonRepeatingElements2(vector<int>&arr){
    int n = arr.size();
    unordered_map<int,int>hash;
    vector<int>rep;
    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }
    for(auto it: hash){
        if(it.second==1) rep.push_back(it.first);
    }
    return rep;
}
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    vector<int>arr;

    for(int i=0; i<n; i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }

    arr= findNonRepeatingElements2(arr);
    cout<<"The non-repeated elements are: ";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}