//FOR UNIQUE ELEMENTS 
/*
we will first check for the sorted array
then we will check if that element is present in that sorted array
if YES  then we will delete the unsorted array
*/
#include <iostream>
#include <vector>
using namespace std;

int searchelement(vector<int> &a,int target){
    int n=a.size();
    int low{0},high{n-1};
    int ans;//this will store the index
    while (low<=high){
        //def mid 
        int mid=(low+high)/2;
        if (a[mid]==target)return mid;
        //if the left array is sorted
        if (a[low]<=a[high]){
            //to check if the number is present 
            if (a[low]<=target && target<=a[mid]){
                high = mid  -1 ;
            }else {
                low = mid +1;
            }
        }
        //if right is sorted
        if (a[mid]<=a[high]){
            //checking if the target is present 
            if (a[mid]<=target && target<=a[high]){
                low = mid+1;
            }else {
                high = mid -1 ;
            }
            
        }
    }
    return ans ;
}

