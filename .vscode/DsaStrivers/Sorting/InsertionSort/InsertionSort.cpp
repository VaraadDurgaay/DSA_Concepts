#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void insertion(vector <int>& arr, int n){
    //array is [3,2,5,1,4]
    for (int i{1};i<n;i++){
        int j=i;
        while( j>0 && arr[j-1]>arr[j]){
            int temp = arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
}
int main(){
    vector <int> arr{4,6,8,2,1,3,5,7};
    int n=arr.size();
    cout<<"before sorting: ";
    for(auto c: arr){
        cout<<c<<" ";
    }
    cout<<endl;
    insertion(arr,n);
    cout<<"after sorting: ";
    for(auto c: arr){
        cout<<c<<" ";
    }
    return 0;
}