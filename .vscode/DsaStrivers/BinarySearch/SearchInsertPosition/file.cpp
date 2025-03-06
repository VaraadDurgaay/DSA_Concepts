//in searching the insert position the same logic of lower boung is use
//jsut the diff is in lower bound we find the number
//and in search insert pos we find the index 
#include <iostream>
#include <vector>
using namespace std;

int insertposition(vector<int> &a,int target){
    int n = a.size();
    int low {0},high{n-1};
    int ans {-1};
    while (low <=high){
        //def mid 
        int mid = (low+high)/2;
        if (a[mid]>=target){
            ans = mid;
            high=mid -1;
        }
        else {
            low = mid +1;
        }
    }
}