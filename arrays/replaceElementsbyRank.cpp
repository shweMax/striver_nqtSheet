#include<bits/stdc++.h>
using namespace std;
/*Example 1:
Input: 20 15 26 2 98 6
Output: 4 3 5 1 6 2
Explanation: When sorted,the array is 2,6,15,20,26,98. So the rank of 2 is 1,rank of 6 is 2,rank of 15 is 3 and so…

Example 2:
Input: 1 5 8 15 8 25 9
Output: 1 2 3 5 3 6 4
Explanation: When sorted,the array is 1,5,8,8,9,15,25. So the rank of 1 is 1,rank of 5 is 2,rank of 8 is 3 and so…*/
void ReplaceElementsByRank(vector<int>& arr, int n){
    int rank;
    
    for(int i=0; i<n; i++){
        set<int> rank;
        for(int j=0; j<n; j++){
            if(arr[j]<arr[i]){
                rank.insert(arr[j]);
            }
        }
        cout<<rank.size()+1<<" ";
    } //TC=O(n^2) SC= O(N)
}
//optimised version, study later alligator!
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    ReplaceElementsByRank(arr, n);
}