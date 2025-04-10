#include<bits/stdc++.h>
using namespace std; //cbacdcbc -> cbad
void removeduplicates(string s, int n){
    unordered_set<char> dup;
    for(int i=0; i<n; i++){
        dup.insert(s[i]);
    }
    for(auto it: dup){
        cout<<it;
    }
}
void removeduplicates2(string s, int n){
    string result;
    for(int i=0; i<n; i++){
        if(result.find(s[i])==string::npos){
            result.push_back(s[i]);
        }
    }
    for(auto it: result){
        cout<<it;
    }
}
int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin, s);
    int len= s.length();

    removeduplicates2(s, len);
}