#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0 ;
        for(int i : nums){
            i == 0 ? count++ : count  ;
        }
        int i = 0 ;
        for(int j = 0 ; j < nums.size() ; j++){
            if(nums[j] != 0 ){
                swap(nums[i] , nums[j]);
                i++;
            }
        }
    }
};