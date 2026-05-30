#include<bits/stdc++.h>
using namespace std;

vector<int> BFSTraversal(int n , int m){
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
    queue<int> q;
    q.push(startNode);
    vector<int> ans;
    while(!q.empty()){
        int val = q.front();
        q.pop();
        ans.push_back(val);
        visitedArray[val] = 1;
        int size = adj_list[val].size();
        for(int i = 0 ; i < size ; i++){
            if(!visitedArray[adj_list[val][i]]){
                visitedArray[adj_list[val][i]] = 1;
                q.push(adj_list[val][i]);
            }
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
    vector<int> ans = BFSTraversal(n , m);
    for(int i : ans){
        cout<<i<<" ";
    }
}