#include<bits/stdc++.h>
using namespace std;

/*Given an array ‘Arr’ that has ‘N’ elements. You have to find the subarray of ‘Arr’ that has the largest product. You must return 
the product of the subarray with the maximum product.

For example:
When ‘N’ = 5, and ‘Arr’ = {-2, 3, -4, 0}
The subarrays of ‘Arr’ are:
{-2}, {-2, 3}, {-2, 3, -4}, {-2, 3, -4, 0}, {3}, {3, -4}, {3, -4, 0}, {-4}, {-4, 0}, {0}.
Among these, {-2, 3, -4} is the subarray having the maximum product equal to 24.
Hence, the answer is 24.*/
void subArraywithMaxProd1(vector<int>arr,int n){
    //brute force
    int maxi=INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int prod=1;
            for(int k=i; k<j; k++){
                prod = prod*arr[k];
            }
            maxi=max(maxi,prod);
        }
    }
    cout<<"The maximum product of the subarray is: "<<maxi; //TC=~O(N^3) //SC=O(1)
}

void subArraywithMaxProd2(vector<int>arr,int n){
    int maxi=INT_MIN;
    for(int i=0; i<n; i++){
        int prod=1;
        for(int j=i; j<n; j++){
            prod= prod*arr[j];
        }
        maxi= max(maxi, prod);
    }
    cout<<"The maximum product of the subarray is: "<<maxi;
}

void subArraywithMaxProd3(vector<int>arr,int n){
    int prefix= 1;
    int suffix=1;
    int maxi=INT_MIN;
    for(int i=0; i<n; i++){
        if(prefix==0) prefix=1;
        if(suffix==0) suffix=1;
        prefix=prefix*arr[i];
        suffix= suffix*arr[n-i-1];
        maxi= max(maxi, max(prefix, suffix));
    }
    cout<<"The maximum product of the subarray is: "<<maxi; 
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    vector<int>arr(n);

    cout<<"Enter array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    subArraywithMaxProd3(arr,n);
}