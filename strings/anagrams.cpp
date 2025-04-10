#include<bits/stdc++.h>
using namespace std;
void result(string s1, string s2){
    //CAT
    bool anagram = false;
    if(s1.length()!=s2.length()) anagram=false;
    else{
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        if(s1==s2) anagram=true;
    }

    if(anagram==true) cout<<"TRUE, these are anagrams";
    else cout<<"FALSE, these are not anagrams";
}
int main(){
    string s1, s2;
    cout<<"Enter string 1: ";
    getline(cin, s1);

    cout<<"Enter string 1: ";
    getline(cin, s2);

    result(s1, s2);
}