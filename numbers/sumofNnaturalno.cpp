#include<bits/stdc++.h>
using namespace std;
void result(int n){ 
    int sum=0;
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    cout<<sum;
}

int main(){ //152
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    result(n);
}