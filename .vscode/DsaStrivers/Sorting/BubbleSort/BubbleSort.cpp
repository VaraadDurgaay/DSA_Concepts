#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void bubble(vector <int>& arr,int n){
    int didSwap=0;
    //array is [83,32,21,52,31,23]
    for (int i{n-1};i>=0;i--){
        for (int j{0};j<=i-1;j++){
            //checking the consecutive elements
            if(arr[j]>arr[j+1]){
                //swapping
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                //if the array is already sorted then we will break the loop 
                int didSwap=1;
            }
        }
        if (didSwap==0){
            break;
        }
    }
}
int main(){
    vector <int> arr{1,2,3,4,5,6,7,8,9,12};
    int n=arr.size();
    cout<<"before sorting: ";
    for(auto c: arr){ 
        cout<<c<<" ";
    }
    cout<<endl;
    bubble(arr,n);
    cout<<"after sorting: ";
    for(auto c: arr){
        cout<<c<<" ";
    }
    return 0;
}