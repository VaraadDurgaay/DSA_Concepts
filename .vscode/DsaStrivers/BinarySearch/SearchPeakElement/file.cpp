/*
    in peak the a[i-1]<a[i]>a[i+1]
    but for the start and end of an array its always -infinity (ON BOTH SIDES)
    FOR the i=0 (starting element) only check for a[i]>a[i+1]
    FOR i = n-1 (last element) only check for a[i]>a[i-1]
*/
//IF THE ARRAY HAS 1 PEAK ELEMENT
#include <iostream>
#include <vector>
using namespace std;    

int peakelement(vector<int> &a){
    int n = a.size();
    int low{0},high{n-1};
    if (a[0]>a[1])return 0;
    if (a[n-1]>a[n-2])return n-1;
    
    while (low<=high){
        //def mid
        int mid = (low+high)/2;
        if (a[mid]>a[mid - 1]  && a[mid]>a[mid+1]){
            return mid;
        }
        else if (a[mid]>a[mid-1]) low =mid+1;
        else if (a[mid]<a[mid+1])high = mid-1;
    }
}
