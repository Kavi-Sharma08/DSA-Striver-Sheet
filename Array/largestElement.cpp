#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout<<"Enter size ";
    cin>>size;
    vector<int> arr(size);
    for(int i = 0 ; i < size ; i++){
        cout<<"Enter "<<i<<" element ";
        cin>>arr[i];
    }
    int largest = arr[0];
    for(int i : arr){
        if(i > largest){
            largest = i ;
        }
    }
    cout<<largest<<" ";
    return 0;
}

// Time Complexity  : O(N)
// Space Complexity : O(1)