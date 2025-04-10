#include<bits/stdc++.h>
using namespace std;
void printDuplicates(string s, int n){
    map<char,int>dup;
    string result;
    for(int i=0; i<s.length(); i++){
        dup[s[i]]++;
    }
    for(auto it: dup){
        if(it.second>1) cout<<it.first<<"-> "<<it.second<<endl;
    }
}
int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin, s);
    printDuplicates(s, s.length());
}