#include<bits/stdc++.h>
using namespace std;

void countIslands(vector<vector<int>> &island , vector<vector<int>> &visited , int i , int j){
        if(island[i][j] == 0) return;
        //left
        if( j > 0 &&  island[i][j-1] == 1){
            if(!visited[i][j-1]){
                visited[i][j-1] = 1;
                countIslands(island , visited , i , j-1 );
            }
            
        }
        // left below

        if( j > 0 && i < island.size() && island[i+1][j-1] == 1){
            if(!visited[i+1][j-1]){
                visited[i+1][j-1] = 1;
                countIslands(island , visited , i+1 , j-1 );
            }
        }

        // below

        if(i < island.size() && island[i+1][j] == 1){
            if(!visited[i+1][j]){
                visited[i+1][j] = 1;
                countIslands(island , visited , i+1 , j );
            }
        }

        //right below

        if(i < island.size() && j < island[i].size() &&  island[i+1][j+1] == 1){
            if(!visited[i+1][j+1]){
                visited[i+1][j+1] = 1;
                countIslands(island , visited , i+1 , j+1 );
            }   
        }

        //right

        if( j < island[i].size() && island[i][j+1]==1){
            if(!visited[i][j+1]){
                
                visited[i][j+1] = 1;
                countIslands(island , visited , i , j+1 );
            }
        }

        //above right

        if( i > 0 && j < island[j].size() &&  island[i-1][j+1] == 1){
            if(!visited[i-1][j+1]){
                visited[i-1][j+1] = 1;
                countIslands(island , visited , i-1 , j+1 );
                
            }
        }

        //above 

        if(i > 0 && island[i-1][j] == 1){
            if(! visited[i-1][j]){

                visited[i-1][j] = 1;
                countIslands(island , visited , i-1 , j );
            }
        }
}
int main(){
    vector<vector<int>> island = {
        {0 , 1 , 1 , 0},
        {0 , 1 , 1 , 0},
        {0 ,1 , 1 , 0 },
        {0 , 0 , 0 , 0 },
        {0 , 0 , 0 , 0},
    };
    vector<vector<int>> visited(island.size() + 1 , vector<int>(island.size() + 1 , 0));
    int count = 0 ;
    for(int i = 0 ; i < island.size() ; i++){
        for(int j = 0 ; j < island[i].size() ; j++){
            if(island[i][j] == 1 && !visited[i][j]){
                visited[i][j] = 1;
                count++;
                countIslands(island , visited , i , j);
            }
        }
    }
    cout<<count;




    

}