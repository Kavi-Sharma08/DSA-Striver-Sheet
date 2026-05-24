#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;
        vector<vector<int>> ans1;
        sort(nums.begin() , nums.end());
        int n = nums.size();

        for(int i = 0 ; i < nums.size() ; i++){
            if(i!=0 && nums[i] == nums[i-1]) continue;
            int target = -nums[i];
            int j = i+1 , k = n -1 ;
            while( j < k ){
                int sum = nums[j] + nums[k];
                if(sum == target){
                    ans1.push_back({nums[i] , nums[j] , nums[k]});
                    j++;
                    k--;
                    while(j < k && nums[j] == nums[j-1]) j++;
                    while(j < k && nums[k] == nums[k+1]) k--; 
                }
                else if (sum > target){
                    k--;
                }
                else {
                    j++;
                }
            }
        }
        return ans1;

    }
};


int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    Solution obj;
    vector<vector<int>> ans = obj.threeSum(nums);
    for(int i = 0 ; i < ans.size() ; i++){
        for(int j = 0 ; j < ans[i].size() ; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
        
    }
    

}