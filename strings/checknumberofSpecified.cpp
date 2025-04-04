/*Example 1:
Input: string str=”Take u forward is Awesome”
Output: 
Vowels: 10
Consonants: 11
White spaces: 4

Example 2:
Input: string str=”India won the cricket match”
Output:
Vowels: 8
Consonants: 15
White spaces: 4*/
#include<bits/stdc++.h>
using namespace std;
void solve(string s,int len){
    int vowels=0, consonants=0, white_spaces=0;
    for(int i=0; i<len; i++){
        s[i]= tolower(s[i]);
    }
    for(int i=0; i<len; i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            vowels++;
        }
        else if(s[i]==' '){
            white_spaces++;
        }
        else{
            consonants++;
        }
    }
    cout<<"Vowels: "<<vowels<<endl;
    cout<<"Consonants: "<<consonants<<endl;
    cout<<"White spaces: "<<white_spaces<<endl;
}
int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin, s);
    int length=s.length();
    solve(s, length);
}