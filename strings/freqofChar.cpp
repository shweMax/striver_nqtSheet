#include<bits/stdc++.h>
using namespace std;
void countfreq(string s, int len){
    unordered_map<char,int> freq;
    for(int i=0; i<len; i++){
        freq[s[i]]++;
    }
    for(auto it:freq){
        cout<<it.first<<"-> "<<it.second<<" ";
    }
}
int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s;
    int len= s.length();
    countfreq(s, len);
}