#include<bits/stdc++.h>
using namespace std;

void removeVowels(string s, int len){
    string result;
    for(int i=0; i<len; i++){
        if(string("AEIOUaeiou").find(s[i])==string::npos){
            result+=s[i];
        }
    }
    cout<<"String without vowels: "<<result<<endl;
}

int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin, s);

    int length = s.length();

    removeVowels(s, length);
}