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

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 3;
    Solution obj;

    obj.rotate(nums , k);
}
