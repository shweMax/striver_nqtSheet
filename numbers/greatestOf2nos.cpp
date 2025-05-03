#include<bits/stdc++.h>
using namespace std;
void result(int n1, int n2){
    int maxi= max(n1, n2); 
    cout<<maxi;
}
void result2(int n1, int n2){
    if(n1>n2) cout<<n1;
    else cout<<n2;
}

int main(){ //152
    int n1,n2;
    cout<<"Enter the number1: ";
    cin>>n1;
    cout<<"Enter the number2: ";
    cin>>n2;

    result2(n1,n2);
}