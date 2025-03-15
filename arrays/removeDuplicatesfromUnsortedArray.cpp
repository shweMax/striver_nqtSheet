//Remove duplicates from unsorted array.
#include<bits/stdc++.h>
using namespace std;
vector<int> removeDuplicates(vector<int>arr){
    unordered_set<int> temp;
    vector<int> result;
    for(auto it: arr){
        if(temp.find(it)==temp.end()){
            temp.insert(it);
            result.push_back(it);
        }
    }
    return result;
    
}
int main(){
    int n; 
    cout<<"Enter the n: ";
    cin>>n;

    vector<int>arr;

    cout<<"Enter the array: ";
    int num;
    for(int i=0; i<n; i++){
        cin>>num;
        arr.push_back(num);
    }

    // cout<<"The array is: "<<endl;
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<endl;
    // }

    arr= removeDuplicates(arr);
    cout<<"The array without duplicates: "<<endl;
    for(auto it: arr){
        cout<<it<<endl;
    }
    

}