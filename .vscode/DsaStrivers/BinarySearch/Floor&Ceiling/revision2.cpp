/*
    the floor is the largest num<=target
    the ceiling is the smallest num>=target
    therfore we willuse the same logic as that upperbound and the lowerbound
*/
#include <iostream>
#include <vector>
using namespace std;

int floor(vector<int> &a,int target){
    int n = a.size();
    int low {0},high {n-1};
    int ans ;
    while (low  <=high){
        //def mid
        int mid = (low +high)/2;

        if (a[mid]<=target){
            ans = a[mid];
            low = mid +1;
        }
        else {
            high = mid -1;
        }
    }
    return ans;
}
int ceiling (vector<int> &a,int target){
    int n = a.size();
    int low {0},high {n-1};
    int ans ;
    while (low <=high){
        //def mid
        int mid = (low +high)/2;
        if (a[mid]>=target){
            ans = a[mid];
            high = mid-1;
        }
    }
}