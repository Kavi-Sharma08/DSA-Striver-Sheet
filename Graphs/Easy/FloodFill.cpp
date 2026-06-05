#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc, int color , int initialColor , vector<vector<int>> &ans , int m , int n){
        ans[sr][sc] = color;

        if(sc >= 1 && ans[sr][sc-1] == initialColor && ans[sr][sc-1]!=color){
            dfs(image , sr , sc - 1 , color , initialColor , ans , m , n);
        }
        if(sr >= 1 && ans[sr-1][sc] == initialColor && ans[sr-1][sc]!=color){
            dfs(image , sr - 1 , sc , color ,initialColor , ans , m , n);
        }
        if(sc < n- 1 && ans[sr][sc+1] == initialColor && ans[sr][sc+1]!=color ){
            dfs(image , sr , sc + 1 , color , initialColor , ans , m , n);
        }
        if(sr < m - 1 && ans[sr+1][sc] == initialColor && ans[sr+1][sc]!=color){
            dfs(image , sr + 1 , sc , color , initialColor , ans , m , n);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> ans = image;
        int m = image.size();
        int n = image[0].size();
        int initialColor = image[sr][sc];
        dfs(image , sr , sc , color , initialColor , ans , m , n);
        return ans;
    }
};


int main(){
    vector<vector<int>> image = {
        {0,0,0},
        {0,0,0}
    };
    Solution obj;
    vector<vector<int>> ans = obj.floodFill(image , 1  , 0 , 2);
    for(vector<int> i : ans){
        for(int j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    

}