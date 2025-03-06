#include <iostream>
#include <vector>
using namespace std;

int missingnumber(vector<int> &a,int k){
    int n = a.size();
    int low{1},high{a[n]};
    while(low<=high){
        //def mid
        int mid=low+(high+low)/2;
        int missing = a[mid]-(mid+1);
        if (missing<k)low = mid+1;
        else high = mid-1;
        
    }
    return low +k;   //REFER THE BOOK FOR THEORY
    
}