#include<bits/stdc++.h>
using namespace std;
//0,1,1,2,3,5,8,13,21,34, ...
void result(int n){
    int first=0;
    int second=1;
    cout<<first<<" "<<second<<" ";
    int curr;
    for(int i=2; i<n; i++){
        curr= first+second;
        first=second;
        second=curr;
        cout<<curr<<" ";
    }
}


int main(){ //152
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    result(n);
}