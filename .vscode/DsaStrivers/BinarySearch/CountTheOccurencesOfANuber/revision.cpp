#include <iostream>
#include <vector>
using namespace std;

int lowerbound(vector<int> &a,int x){
    int n = a.size();
    int low {0},high{n-1};
    int ans {-1};
    while (low<=high){
        int mid = (low+high)/2;
        if (a[mid]>=x){
            //you can be the probable ans
            ans = a[mid];
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
}