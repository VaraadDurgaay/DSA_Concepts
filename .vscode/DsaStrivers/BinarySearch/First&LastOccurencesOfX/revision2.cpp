#include <iostream>
#include <vector>
using namespace std;

int lowerbound(vector<int> &a,int target){
    int n = a.size();
    int low {0},high{n-1};
    int ans;
    while (low<=high){
        //def mid
        int mid = (low +high)/2;
        
        if (a[mid]>=target){
            ans = mid;
            high = mid -1;
        }
        else{
            low = mid+1;
        }

    }
    return ans ;
}
int upperbound(vector<int> &a,int target){
    int n = a.size();
    int low {0},high{n-1};
    int ans ;
    while (low<=high){
        //def mid
        int mid = (low +high)/2;
        if (a[mid]>target){
            ans  = mid ;
            high = mid - 1;

        }
        else {
            low = mid +1;
        }
        
    }
    return ans;
}
vector<int> occurences(vector<int> &a,int target){
    int first = lowerbound(a,target);
    int last = upperbound (a,target);
    if (first == -1 || a[first]==target){
        return {-1,-1};
    }
    else {
        return {first,last-1};
    }
}