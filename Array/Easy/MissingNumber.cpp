#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {6, 2, 4, 5, 3, 7, 1 , 9 , 10};
    int n = arr.size();
    int maxi = INT_MIN;
    int sum = 0 ;
    for(int i = 0 ; i < n ; i++){
        sum+=arr[i];
        maxi = max(arr[i] , maxi);
    }
    int actualSum = maxi*(maxi + 1)/2;

    cout<<actualSum - sum;

}