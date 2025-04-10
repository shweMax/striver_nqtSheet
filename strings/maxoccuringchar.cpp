#include<bits/stdc++.h>
using namespace std; //apple  ap-le
void result(string s, int n){
    unordered_map<char, int> freq;
    for(int i=0; i<n; i++){
        freq[s[i]]++;
    }
   
    int maxi=INT_MIN;
    string maxchar;
    for(auto it: freq){
        // cout<<it.first<<"-> "<<it.second;
        if(it.second>maxi) {
            maxi= it.second;
            maxchar= it.first;
        }
    }
    cout<<"The max occuring character is: "<<maxchar;

}
int main(){
    string s;
    cout<<"Ente string: ";
    getline(cin,s);
    int len= s.length();
    result(s, len);
}