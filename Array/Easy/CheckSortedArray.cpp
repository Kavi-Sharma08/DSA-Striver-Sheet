#include<bits/stdc++.h>
using namespace std;
bool checkSorted(vector<int> &nums){

    int count = 0 ;

    for(int i = 1 ; i < nums.size() ; i++){
        if(nums[i] < nums[i-1]){
            count++;
            if(count > 1) return false;
        }
    }
    if(nums[0] < nums[nums.size() -1]) count++;
    return count<= 1 ? true : false;
    // vector<int> arr(nums);
    // sort(arr.begin() , arr.end());
    // vector<int> temp = nums;
    // nums.insert(nums.end() , temp.begin() , temp.end());
    // int i = 0 , j = 0 , k = 0 ;

    // while( j < nums.size() && k < arr.size() ){
    //     if(arr[k] == nums[j]){
    //         j++;
    //         k++;
    //     }
    //     else {
    //         i++;
    //         j++;
    //         k = 0;
    //     }
    // }
    // return k >= arr.size() ? true : false;
}
int main(){
    vector<int> arr = {6,4,7,1,3};
    cout<<checkSorted(arr);
    

}