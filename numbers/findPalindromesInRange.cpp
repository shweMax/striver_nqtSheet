#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int i){
    int rev=0;
    int dup=i;
    while(dup>0){
        int ld=dup%10;
        rev= (rev*10)+ld;   
        dup=dup/10;
    }
    if(rev==i) return true;
    else return false;
}
void result(int min, int max){
    //10-50  
    for(int i=min; i<=max; i++){
        if(isPalindrome(i)) cout<<i<<" ";
    }
}
int main(){
    int min, max; 
    cout<<"Enter a minimum of the range: ";
    cin>>min;
    cout<<"Enter a maximum of the range: ";
    cin>>max;

    result(min,max);
}