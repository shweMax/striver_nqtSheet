/*Example 1:
Input: 8 7 1 6 5 9
Output: 1 5 6 9 8 7
Explanation: First three elements are in the ascending order and next three elements are in the descending order.

Example 2:
Input: 4 2 8 6 15 5 9 20
Output: 2 4 5 6 20 15 9 8*/
#include<bits/stdc++.h>
using namespace std;
void Rearrange(vector<int>&arr){
    int n= arr.size();
    sort(arr.begin(), arr.end());

    int mid= n/2;
    reverse(arr.begin()+mid, arr.end());
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
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
    Rearrange(arr);
}