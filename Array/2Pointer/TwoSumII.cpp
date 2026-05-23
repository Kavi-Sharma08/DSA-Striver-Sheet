#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size() - 1;
        int i = 0 , j = n ;
        while(i <= j){
            int sum = nums[i] + nums[j];
            if(sum == target){
                return {i+1 , j+1};
            }
            else if(sum > target){
                j--;
            }
            else if(sum < target){
                i++; 
            }
        }
        return {};
    }
};
int main(){
    vector<int> arr = {2,3,4};
    int target = 6;
    Solution Obj;
    vector<int> ans = Obj.twoSum(arr , target);
    for(int i : ans){
        cout<<i<<" ";
    }
}