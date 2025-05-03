//Given a number X,  print its factorial.
#include<bits/stdc++.h>
using namespace std;
void result(int n){ 
    int fac=1;
    for(int i=2; i<=n; i++){
        fac=i*fac;
    }
    cout<<fac;
}

int main(){ //152
    int n;
    cout<<"Enter the n: ";
    cin>>n;

    result(n);
}