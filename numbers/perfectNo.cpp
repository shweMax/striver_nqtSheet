#include<bits/stdc++.h>
using namespace std; //6 = 1+2+3, 15 != 3+5+1, 28= 1+2+4+7+14 //sum of the divisors
void result(int n){ 
    int sum=0;
    for(int i=1; i<n; i++){
        if(n%i==0) sum+=i;
    }
    if(sum==n) cout<<"True";
    else cout<<"False";
}

int main(){ //152
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    result(n);
}