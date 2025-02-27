#include<bits/stdc++.h>
using namespace std;
int countFreq(vector<int> v, int num){
    int n= v.size();
    int cnt=0; 
    for(int i=0; i<n; i++){
        if(v[i]==num){
            cnt++;
        }
    }
    return cnt;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int freq= 1;
    int count= countFreq(v, freq);
    cout<<"The frequency of "<<freq<<" is "<<count<<endl;
}