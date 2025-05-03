#include<bits/stdc++.h>
using namespace std;
void result(int n){
    int dup=n;
    int sum=0;
    while(dup>0){
        int ld= dup%10;
        sum=sum*10+ ld;
        dup=dup/10;
    }
    cout<<sum;
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    result(n);
}