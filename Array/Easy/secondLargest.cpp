#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr [] = {8, 10, 5, 7, 9 , 9, 9 ,9 , 9,10 , 10};
    int largest = arr[0] , secLarge = arr[0];

    for(int i = 0 ; i < sizeof(arr)/sizeof(arr[0]) ; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
        else if(arr[i] != largest && secLarge < largest && arr[i] > secLarge){
            secLarge = arr[i];
        }
    }
    cout<<"Largest is : "<<largest<<endl;;
    cout<<"secondLargest is : "<<secLarge;

    // for(int i : arr){
    //     if(i > largest){
    //         largest = i ;
    //     }
    // }
    // int secLarge = -1;
    // for(int i : arr){
    //     if(i > secLarge && i!=largest){
    //         secLarge = i;
    //     }
    // }
    // cout<<"Largest is : "<<largest<<endl;;
    // cout<<"secondLargest is : "<<secLarge;

    return 0;
    

}