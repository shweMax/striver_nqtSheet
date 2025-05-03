#include<bits/stdc++.h>
using namespace std;
void result(int n){
    //2746 
    int min=INT_MAX;
    int max=INT_MIN;
    while(n>0){
        int ld=n%10;
        if(ld<min){
            min=ld;
        }
        if(ld>max){
            max=ld;
        }
        n=n/10;
    }
    cout<<"The minimum digit of the number is: "<<min<<endl;
    cout<<"The maximum digit of the number is: "<<max<<endl;
}


int main(){ //152
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    result(n);
}