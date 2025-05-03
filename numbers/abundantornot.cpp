/*
Example 1:
Input: 18
Output: Abundant Number
Explanation: Divisors of 18 are 1,2,3,6,9. 1+2+3+6+9=21, Since 21 is greater than 18, 18 is an abundant number.

Example 2:
Input: 21
Output: Not Abundant Number
Explanation:Divisors of 21 are 1,3,7. 1+3+7=11, Since 11 is smaller than 21, 11 is not an abundant number.
Definition: If the sum of divisors of a number is greater than the number then it is called abundant number.
*/
#include<bits/stdc++.h>
using namespace std;
void result(int n){ 
    int div=0;
    for(int i=1; i<n; i++){
        if(n%i==0){
            div+=i;
        } 
    }
    if(div>n) cout<<"Abundant number";
    else cout<<"No";

}

int main(){ 
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    result(n);
}