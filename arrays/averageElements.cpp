#include<bits/stdc++.h>
using namespace std;
float average(vector<int>&a){
    int size= a.size();
    if(size==0) return 0;
    float sum=0;
    for(int i=0; i<size; i++){
        sum+=a[i];
    }
    return (sum/size);
}
int main(){
    int n;
    cout<<"Enter the n: ";
    cin>>n;

    vector<int>arr(n);
    
    cout<<"Enter the array of size "<<n<<endl;
    for(int i=0;i<n; i++){
        cin>>arr[i];
    }

    float avg= average(arr);
    cout<<"Average of the array is: "<<avg<<endl;
}