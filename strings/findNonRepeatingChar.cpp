#include<bits/stdc++.h>
using namespace std;
/*Example 1:
Input: string = “google”
Output: l,e

Explanation: Non repeating characters are l,e.

Example 2:
Input: string = “yahoo”
Output: y,a,h
Explanation: Non repeating characters are y,a,h*/
void result(string s, int len){
    unordered_map<char, int>result;
    for(int i=0; i<len; i++){
        result[s[i]]++; 
    }
    cout<<"The non repeataing elements in the character is: ";
    for(auto it: result){
        if(it.second==1) cout<<it.first<<" ";
    }
}
void result2(string s, int  n){
    string result="";
    for(int i=0; i<n; i++){
        bool isRepeat = false;
        for(int j=0; j<n; j++){
            if(i!=j && s[i]==s[j]){
                isRepeat=true;
                break;
            }
        }
        if(!isRepeat && s[i]!=' '){
            result+=s[i];
        }
    }
    cout<<"The non repeating elements in the character is: "<<result<<endl;
    
}
int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin, s);

    int len= s.length();

    result(s, len);
}