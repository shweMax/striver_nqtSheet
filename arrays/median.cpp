#include<bits/stdc++.h>
using namespace std;
float median(vector<int>&a){
    sort(a.begin(), a.end()); //1 2 3 4 5 6
    int n= a.size();
    int index = n/2;
    if(n%2!=0){
        return a[index];
    } 
    else{
        float avg= ((a[index]+a[index-1])/2.0);
        return avg;
    }
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
    float med= median(arr);
    cout<<"The median of the array is: "<<med<<endl;
}