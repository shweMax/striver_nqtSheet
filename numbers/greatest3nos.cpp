#include<bits/stdc++.h>
using namespace std;
void result2(int n1, int n2, int n3){
    if(n1>n2 && n1>n3) cout<<n1;
    else if(n2>n3 && n2>n1) cout<<n2;
    else cout<<n3;
}

int main(){
    int n1,n2,n3;
    cout<<"Enter the number1: ";
    cin>>n1;
    cout<<"Enter the number2: ";
    cin>>n2;
    cout<<"Enter the number 3: ";
    cin >>n3;

    result2(n1,n2,n3);
}