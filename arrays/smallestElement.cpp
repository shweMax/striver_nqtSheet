/*Example 1:
Input: arr[] = {2,5,1,3,0};
Output: 0
Explanation: 0 is the smallest element in the array. 

Example2: 
Input: arr[] = {8,10,5,7,9};
Output: 5
Explanation: 5 is the smallest element in the array.*/

#include<bits/stdc++.h>
using namespace std;
int smallestElement(int arr[], int n){
    int smallest= arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    return smallest;
}
int main(){
    int n;
    cout<<"Enter the number of elements in the array: "<<endl;
    cin>>n;

    int arr[n]; 

    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int s= smallestElement(arr,n);

    cout<<"The smallest element in the array is: "<<s<<endl;
}