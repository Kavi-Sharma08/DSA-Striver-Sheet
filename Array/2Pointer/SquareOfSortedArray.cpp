#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        if(nums.size() == 1) return {nums[0]*nums[0]};

        int ind = 0;
        while(ind < nums.size()){
            if(nums[ind] >= 0){
                break;
            }
            ind++;
        }

        int i = ind - 1;
        int j = ind;
        vector<int> ans ;
        while(j < nums.size() && i >= 0 ){
            if(-(nums[i]) < nums[j]){
                ans.push_back(nums[i]*nums[i]);
                i--;
            }
            else {
                ans.push_back(nums[j]*nums[j]);
                j++;
            }
        }

        while( i >= 0){
            ans.push_back(nums[i]*nums[i]);
            i--;
        }

        while(j < nums.size() ){
            ans.push_back(nums[j]*nums[j]);
            j++;
        }

        return ans;
    }
};


int main(){
    vector<int> arr = {-4,-1,0,3,10};
    Solution obj;
    vector<int> ans = obj.sortedSquares(arr);
    for(int i : ans){
        cout<<i<<" ";
    }
    

}