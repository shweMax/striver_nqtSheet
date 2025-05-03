#include<bits/stdc++.h>
using namespace std;
void result(int n){
    int cnt=0;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            cnt++;
        }
    }
    if(cnt==2) cout<<"Prime no.";
    else cout<<"Not prime no.";
}
int main(){
    int n; 
    cout<<"Enter a number: ";
    cin>>n;

    result(n);
}