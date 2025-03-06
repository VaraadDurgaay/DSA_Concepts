/*
    in this the INDEX of SMALLEST number tells how many times the array is rotated
    there can be 3 cases,Whole array is sorted,Only left is sorted, OR Only right is sorted
    IN THESE 3 CASES we will return the index of the smallest element
*/
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int timesrotated(vector<int> &a){
    int n = a.size();
    int low {0}, high {n-1};
    int ans {INT_MAX};
    int idx {-1};

    while (low <= high){
        int mid = (low + high) / 2;

        // If the whole array is already sorted
        if (a[low] <= a[high]){
            return low;
        }
        if (a[mid]<ans){
            ans = a[mid];
            idx = mid;
        }

        // If left half is sorted
        if (a[low] <= a[mid]){
            if (a[low] < ans){
                ans = a[low];
                idx = low;
            }
            low = mid + 1;
        } 
        // If right half is sorted
        else {
            if (a[mid] < ans){
                ans = a[mid];
                idx = mid;
            }
            high = mid - 1;
        }
    }
    return idx;
}

int main(){
    vector<int> a {5, 4, 3, 1, 2};
    cout << "Array is rotated: " << timesrotated(a) << " times" << endl;
    return 0;
}
