//we will be using the recursion version of MERGESORT
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void mergesort(vector<int> &a,int low,int high){
    //low and high will be pre-defined
    //int low{0},high{n-1};
    if (low==high)return;
    int mid = (low+high)/2;
    mergesort(a,low,mid);
    mergesort(a,mid+1,high);
    merge(a,low,mid,high);
}
//code for merge
vector<int> merge(vector<int>  &a,int low,int mid,int high){
    int left =low;
    int right = mid+1;
    vector<int> temp;
    while (left<=mid && right<=high){
        if (a[left]<=a[right]){
            temp.push_back(a[left]);
            left++;
        }
        else{
            temp.push_back(a[right]);
            right++;
        }

    }
    //if i gets exhausted and j is still left
    while (left<=mid){
        temp.push_back(a[left]);
        left++;
    }
    while(right<=right){
        temp.push_back(a[right]);
        right++;
    }
    //copying the temp array to the original array
    for (int i{low};i<high;i++){
        a[i]=temp[i-low];
    }
}