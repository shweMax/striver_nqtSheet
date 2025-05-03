#include<bits/stdc++.h>
using namespace std;//6=1,2,3,6
void result(int n){
    for(int i=1; i<=n; i++){
        if(n%i==0) cout<<i<<" ";
    }
}
void result2(int n){
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            if(n/i==i) cout<<i<<" ";
            else cout<<i<<" "<<n/i<<" ";
        }
    }
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    result2(n);
}