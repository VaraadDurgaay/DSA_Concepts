#include <iostream>
#include <vector>
using namespace std;

//the CONCEPT IS SAME SAME THE ALLOCATE  BOOKS QUESTION
int binarysearch (vector<int> &a,int k){
    int low{*max_element(a.begin(),a.end())};
    int high{accumulate(a.begin(),a.end(),0)}
    while(low<=high){
        int mid=low + (high-low)/2;

        if (hours(a,mid)>=k){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return low;
}
int hours(vector<int> &a, int m){
    int painters{1},lasttime{0}//this is at start
    for (int i{0};i<a.size();i++){
        if (lasttime+a[i]<=m){
            lasttime+=a[i];
        }
        else{
            //if >m
            painters++;
            lasttime=a[i];
        }
    }
    return painters;
}
