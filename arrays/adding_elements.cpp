#include<bits/stdc++.h>
using namespace std;
/*Example:
Input: N = 5, array[] = {1,2,3,4,5}
insertbeginning(6)
insertending(7)
insertatpos(8,4)
Output: 6,1,2,8,3,4,5,7
Explanation: 6 is added at the beginning and 7 is added at the end and 8 is added at position 4 */

void insertbeginning(vector<int>&arr, int val){
    int n= arr.size();
    for(int i=n-1; i>=0; i--){
        arr[i+1]= arr[i];
    }
    arr[0]=val;

    for(int i=0; i<=n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void insertending(vector<int>&arr, int val){
    int n= arr.size();
    arr[n+1]= val;
    for(int i=0; i<=n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void insertatpos(vector<int>&arr, int val, int pos){
    int n= arr.size();
    for(int i=n+1; i>=pos-1; i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1]=val;
    for(int i=0; i<=n+1; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
     
    vector<int> arr(n);
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
   
    insertbeginning(arr, 8);
    insertending(arr, 7);
    insertatpos(arr, 6,4);
}