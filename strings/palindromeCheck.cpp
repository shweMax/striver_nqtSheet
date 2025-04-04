#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(string s){
    for(int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }
    int start = 0;
    int end= s.length()-1;
    while(start<end){
        if(s[start]!=s[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;

    if (checkPalindrome(s))
        cout<<s<<" is a palindrome.";
    else
        cout<<s<<" is not a palindrome.";
}