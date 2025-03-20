#include<bits/stdc++.h>
using namespace std;
/*Example 1:
Input: (1,2),(2,1),(3,4),(4,5),(5,4)
Output: (2,1) (5,4)
Explanation: Since (1,2) and (2,1) are symmetric pairs and (4,5) and (5,4) are symmetric pairs.

Example 2:
Input: (1,5),(2,3),(4,2),(5,1),(2,4)
Output: (2,4) (5,1)
Explanation: Since (1,5) and (2,4) are symmetric pairs and (5,1) and (4,2) are symmetric pairs.*/
// Function to find symmetric pairs
void findSymmetricPairs(int arr[][2], int n) {
    cout<<"The symmetric pairs are: ";
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j][0]==arr[i][1] && arr[j][1]==arr[i][0]){
                cout<<"("<<arr[i][0]<<" "<<arr[i][1]<<") "<<endl;
            }
        }
    }
    //TC= O(n^2)
}

void findSymmetricPairs2(int arr[][2], int n) {
    cout<<"The symmetric pairs are: "<<endl;
    unordered_map<int,int>mp;
    for(int i=0; i<n; i++){
        int first = arr[i][0];
        int second = arr[i][1];

        if(mp.find(second)!=mp.end() && mp[second]==first){
            cout<<first<<" "<<second<<endl;
        }

        else{
            mp[first]=second;
        }

    }
    //TC= O(n) SC=O(1)
}

int main() {
    int n;
    cout << "Enter the number of pairs: ";
    cin >> n;

    int arr[n][2]; // Declare the array based on user input
    cout << "Enter the pairs (2 integers per pair):" << endl;

    // Taking input from the user
    for (int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    // Function call to find symmetric pairs
    findSymmetricPairs2(arr, n);

    return 0;
}