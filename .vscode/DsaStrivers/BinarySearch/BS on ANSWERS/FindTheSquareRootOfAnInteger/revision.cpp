#include <iostream>
#include <vector>
using namespace  std;

int sqrt(int x){
    int low = 1;
    int high{x};
    int ans{-1};
    while (low<=high){
        //def mid
        int mid = (low+high)/2;
        //if mid*mid!<=x
        if (mid*mid <= x){
            //you can be the probable ans
            ans= mid;
            //again searching if there can be any bigger numbers
            low = mid+1;

        }
        else{
            //if mid*mid !<= x
            high = mid-1;
        }
    }
    return ans;
}