#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {-3,2,1};
    int k = 15;
    
    int i= 0 , j = 0;
    int sum = 0 ;
    int maxLength = INT_MIN;
    while( j < arr.size() ){
        sum+=arr[j];

        if(sum > k){
            while(i < j && sum > k){
                sum = sum - arr[i];
                i++;
            }
        }
        
        if(sum == k){
            maxLength = max(j-i+1 , maxLength);
        }
        j++;

    }

    maxLength = (maxLength == INT_MIN) ? 0 : maxLength;
    cout<<maxLength;

}