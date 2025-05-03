#include<bits/stdc++.h>
using namespace std;
void result(int n){
    //4554
    int rev=0;
    int dup=n;
    while(n>0){
        int ld= n%10;
        rev=(rev*10)+ld;
        n=n/10;
    }
    if(rev==dup) cout<<"Palindromes!";
    else cout<<"Not palindromes";
}
int main(){
    int n; 
    cout<<"Enter a number: ";
    cin>>n;

    result(n);
}