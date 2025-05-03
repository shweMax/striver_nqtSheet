#include<bits/stdc++.h>
using namespace std;
/*
Example 1:
Input: 378
Output: Yes it is a Harshad number.
Explanation: 3+7+8=18. 378 is divisible by 18. Therefore 378 is a harshad number.

Example 2:
Input: 379
Output: No
 it is not a Harshad number.
Explanation: 3+7+9=19. 379 is not divisible by 19. Therefore 379 is a harshad number.
*/
void result(int n){
    int sum=0;
    int dup=n;
    while(n>0){
        int ld= n%10;
        sum+=ld;
        n=n/10;
    }
    if(dup%sum==0) cout<<"Harshad number";
    else cout<<"Not a Harshad number.";
}


int main(){ 
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    result(n);
}