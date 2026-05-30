#include<bits/stdc++.h>
using namespace std;
vector<int> DFSTraversal(vector<int> adj_list[] , int startNode , vector<int> &visitedArray , vector<int> &ans  ){
    visitedArray[startNode] = 1;
    ans.push_back(startNode);
    for(int i  =  0 ; i < adj_list[startNode].size() ; i++ ){
        if(!visitedArray[adj_list[startNode][i]]){
            visitedArray[adj_list[startNode][i]] = 1;
            DFSTraversal(adj_list , adj_list[startNode][i] , visitedArray , ans );
        }
    }
    return ans;
}
int main(){
    int n , m ;
    cout<<"Enter total node ";
    cin>>n;
    cout<<"Enter total edges ";
    cin>>m;
    vector<int> adj_list[n+1];
    for(int i = 0 ; i < m ; i++){
        int u , v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    int startNode ;
    cout<<"Enter start Node : ";
    cin>>startNode;
    vector<int> visitedArray(n+1 , 0);
    vector<int> ans;
    vector<int> ans1 = DFSTraversal(adj_list , startNode , visitedArray , ans );
    for(int i : ans1){
        cout<<i<<" ";
    }
    

}