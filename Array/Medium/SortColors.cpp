#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0 ;
        int count0 = 0;
        while(i < nums.size()){
            if(nums[i] == 0){
                count0++;
            }
            i++;
        }
        int j = 0 ;
        int count1 = 0;
        while(j < nums.size()){
            if(nums[j] == 1){
                count1++;
            }
            j++;
        }
        int k = 0 ;
        int count2 = 0;
        while(k < nums.size()){
            if(nums[k] == 2){
                count2++;
            }
            k++;
        }

        int ind = 0 ;
        while(count0!=0){
            nums[ind] = 0;
            count0--;
            ind++;
        }
        while(count1!=0){
            nums[ind] = 1;
            count1--;
            ind++;
        }
        while(count2!=0){
            nums[ind] = 2;
            count2--;
            ind++;
        }
        return;
        
    }
};
int main(){
    Solution obj;
    vector<int> arr = {2,0,2,1,1,0};
    obj.sortColors(arr);
}