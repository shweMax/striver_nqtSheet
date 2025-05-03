#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    int cnt=0;
    for(int i=1; i<=n; i++){
        if(n%i==0) cnt++;
    }
    if(cnt==2) return true;
    else return false;
}
void result(int min, int max){
    for(int i=min; i<=max; i++){
        if(isPrime(i)) cout<<i<<" ";
    }
}
int main(){
    int min, max; 
    cout<<"enter the min: ";
    cin>>min;
    cout<<"Enter the max: ";
    cin>>max;

    result(min,max);
}