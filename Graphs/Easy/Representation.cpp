#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> adjancency_matrix(){
    int n , m ;
    cout<<"Enter total node ";
    cin>>n;
    cout<<"Enter total edges ";
    cin>>m;
    vector<vector<int>> matrix1(n+1 , vector<int> (n+1 , 0));
    for(int i = 0 ; i < m ; i++){
        int u , v;
        cin>>u;
        cin>>v;
        matrix1[u][v] = 1;
        matrix1[v][u] = 1;
    }
    for(int i = 0 ; i < matrix1.size() ; i++){
        for(int j = 0 ;j < matrix1[i].size() ; j++){
            cout<<matrix1[i][j]<<" ";
        }
        cout<<endl;
    }
    return matrix1;
}
void adj(){
    int n , m ;
    cout<<"Enter total node ";
    cin>>n;
    cout<<"Enter total edges ";
    cin>>m;
    vector<int> adj[n+1];

    for(int i = 0 ; i < m ; i++){
        int u , v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(vector<int> i : adj){
        for(int j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main(){
    // adjancency_matrix();
    adj();
}