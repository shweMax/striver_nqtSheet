#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    int count=0;
    for(int i=1; i<=n; i++){
        if(n%i==0) count++;
    }
    if(count>2) return false;
    else return true;
}
void result(int n){
    for(int i=2; i<=n; i++){
        if(n%i==0){
            if(isPrime(i)) cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    result(n);
}