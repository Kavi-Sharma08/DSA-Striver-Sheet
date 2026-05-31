#include<bits/stdc++.h>
using namespace std;

void DFS(vector<int> adj_list[] , vector<int> &visitedArray , int startNode){
    for(int i = 0 ; i < adj_list[startNode].size() ; i++){
        if(!visitedArray[adj_list[startNode][i]]){
            visitedArray[adj_list[startNode][i]] = 1;
            DFS(adj_list , visitedArray , adj_list[startNode][i]);
        }
    }  

}
int main(){
    vector<vector<int>> adj_mat = {
        {1,1,0},
        {1,1,0},
        {0,0,1}
    };
    int size = adj_mat.size();
    vector<int> adj_list[size];
    vector<int> visitedArray(size);

    // converting adjancey matrix into the adjancey list  
    for(int i = 0 ; i < size ; i++){
        visitedArray[i] = 1;
        for(int j = 0 ; j < adj_mat[i].size() ; j++){
            if(adj_mat[i][j] == 1 && i != j && !visitedArray[j]){
                adj_list[i].push_back(j);
                adj_list[j].push_back(i);
            }
        }
    }
    vector<int> visited(size , 0);
    int count = 0 ;
    for(int i = 0 ; i < adj_mat.size() ; i++){
        if(visited[i] == 0){
            visited[i] = 1;
            count++;
            DFS(adj_list , visited  , i);
        }
    }
    cout<<count;
    
    
    
    

}