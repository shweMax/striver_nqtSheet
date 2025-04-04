#include<bits/stdc++.h>
using namespace std;
/*Example 1:
Input: N = 8, array[] = {1,2,3,2,4,3,1,2}
Output: 2 2 2 1 1 3 3 4 
Explanation: Since  2 is present 3 times in an array , so print it 3 times ,then print ‘1’ 2 times and then ‘3’ 2 times and 4 has 
least frequency, it will be printed at last.

Example 2:
Input: N = 6, array[] = {-199,6,7,-199,3,5}
Output: -199 -199 3 5 6 7
Explanation: Since -199 is present 2 times so it will be printed at first , then 3 , 5 ,6 ,7 are present once in array , so print them 
in their sorted order.*/
void SortElementsByFreq(vector<int>& arr, int n){
    unordered_map<int, int>freq;
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }
    for(auto it: freq){
        
    }

    
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    SortElementsByFreq(arr, n);
}