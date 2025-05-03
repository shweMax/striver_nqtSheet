#include<bits/stdc++.h>
using namespace std;
void result(int n, int p){
    int res= pow(n,p);
    cout<<res;
}
void result2(int n, int p){
    int res=1;
    for(int i=1; i<=p; i++){
        res=res*n;
    }
    cout<<res;
}
//optimal
int main(){
    int n, power;
    cout<<"Enter number: ";
    cin>>n;

    cout<<"Enter the power of the number: ";
    cin>>power;

    result2(n,power);
}