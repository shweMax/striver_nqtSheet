#include<bits/stdc++.h>
using namespace std;
//1 2 3 4 5 
//5 4 3 2 1
vector<int> reverseArray(vector<int> arr){
    //using an extra array
    int n= arr.size();
    vector<int>v(n);
    for(int i=0; i<n; i++){
        v[i]=arr[(n-i)-1];
    }
    return v; //TC= O(N) SC=O(N)
}
vector<int> reverseArray2(vector<int> arr){
    int n= arr.size();
    int start= 0;
    int end= n-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    return arr; //TC= O(N)
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter arr: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    vector<int>v= reverseArray2(arr);
    cout<<"The reversed array is: "<<endl;
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
}