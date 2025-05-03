/*
📏 Example:
Sequence:
2, 5, 8, 11, 14, 17, 20, ...
5 - 2 = 3
8 - 5 = 3
11 - 8 = 3
Common difference 
𝑑=3
So, every time you add 3 to the previous number.

*/
//Given an A.P. Series, we need to find the sum of the Series.
#include<bits/stdc++.h>
using namespace std;
void result(float a, float n, float d){
    float sum= (n/2.0)*(2.0*a + (n-1)*d);
    cout<<sum;
}

int main(){ //152
    float a,n,d;
    cout<<"Enter the first term no. of the AP series (a): ";
    cin>>a;
    cout<<"Enter the n (of the nth term): ";
    cin>>n;
    cout<<"Enter common difference(d): ";
    cin>>d;

    result(a,n,d);
}