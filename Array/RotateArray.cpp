#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        int normalizedKValue = nums.size() - k;
        reverse(nums.begin() , nums.begin() + normalizedKValue);
        reverse(nums.begin() + normalizedKValue , nums.end());
        reverse(nums.begin() , nums.end());
        return;
    }
};