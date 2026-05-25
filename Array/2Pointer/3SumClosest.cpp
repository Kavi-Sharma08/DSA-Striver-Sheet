#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin() , nums.end());
        int n = nums.size();
        int min_diff = INT_MAX ;
        int closest = 0;
        for(int i = 0 ; i < n ; i++){
            int j = i + 1 , k = n - 1;
            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == target){
                    return nums[i] + nums[j] + nums[k];
                }
                else if(sum < target){
                    j++;
                }
                else {
                    k--;
                }
                int diff = abs(sum - target);
                if(diff < min_diff){
                    diff = min_diff;
                    closest = sum ;
                }

            }
        }
        return closest;

    }
};


int main(){
    vector<int> nums = {-1,2,1,-4};
    int target = 1;
    Solution obj;
    cout<< obj.threeSumClosest(nums , target);
    
    

}