/*
Intuition: A year is a leap year only if it satisfies the following condition.

The year is divisible by 400
The year is divisible by 4 but not by 100
*/
#include<bits/stdc++.h>
using namespace std;
void result(int n){
    if(n%4==0 && n%100!=0 || n%400==0) cout<<"leap year";
    else cout<<"not leap year";
}


int main(){ //152
    int n;
    cout<<"Enter the year: ";
    cin>>n;

    result(n);
}