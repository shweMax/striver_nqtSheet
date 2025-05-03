#include<bits/stdc++.h>
using namespace std;
/*
Problem Statement: Given an integer Print “YES” if it is a strong number else print “NO”.

Note : 

When the sum of factorial of individual digits of a number is equal to the original number the number is called a strong number. 
Strong number is also known as Krishnamurthi number/Peterson Number.
*/
int fac(int n){
    int res=1;
    for(int i=1; i<=n; i++){
        res=res*i;
    }
    return res;
}
void result(int n){
    int sum=0;
    int dup=n;
    while(n>0){
        int ld= n%10;
        sum += fac(ld); 
        n= n/10;
    }
    if(sum==dup) cout<<"Yes, strong number";
    else cout<<"Not a strong number";
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n; //145

    result(n);
}