#include<bits/stdc++.h>
using namespace std;

/*Example 1:
Input: 
Arr[] = [1,1,2,3,4,4,5,2] //1,1,2,2,3,4,4,5
Output:
 1,2,4
Explanation:
 1,2 and 4 are the elements which are occurring more than once.

Example 2:
Input:
 Arr[] = [1,1,0]
Output:
 1
Explanation:
 Only 1 is occurring more than once in the given array.*/

vector<int>findRepeatingElements(vector<int>&arr){
    int n= arr.size();
    vector<int> rep;
    sort(arr.begin(), arr.end());
    for(int i=1; i<n; i++){
        if(arr[i]==arr[i-1]){
            rep.push_back(arr[i]);
        }
    }
    return rep; //TC= O(nlogn) SC= O(n)
}
vector<int> findRepeatingElements2(vector<int>&arr){
    int n= arr.size();
    vector<int> yo;
    unordered_map<int,int>rep;
    for(int i=0; i<n; i++){
        rep[arr[i]]++;
    }
    for(auto it: rep){
        if(it.second >1){
            yo.push_back(it.first);
        }
    }
    return yo;  //TC=O(n) SC=O(n)
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

    arr= findRepeatingElements2(arr);
    cout<<"The repeated elements are: ";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<", ";
    }
}