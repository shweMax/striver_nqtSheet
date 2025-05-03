#include<bits/stdc++.h>
using namespace std;
void result(int n){ 
    int num=n;
    int cnt= to_string(n).length();
    int sum=0;
    while(n>0){
        int ld= n%10;
        sum += int(pow(ld, cnt));
        n=n/10;
    }
    if(sum==num) cout<<"True";
    else cout<<"False";
    //this code dont work for armstrong no like 153.
}

int main(){ //152
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    result(n);
}