#include <iostream>
#include <vector>
using namespace std;

int lowerbound(vector<int> &a,int target){
    //so lower bound is >=target
    //mid plays an imp role in getting the ans 
    //so we will use mid to get the ans
    int  n =a.size();
    int low {0},high{n-1};
    int ans{n};//at start the ans is a hypothetical value ie the "n"
    while (low<=high){
        //difining the mid
        int mid = (low+high)/2;
        if (a[mid]>=target){
            ans = a[mid];
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int> b{1,2,3,4,5,6,7};
    int result = lowerbound(b,4);
    cout<<result<<endl;

    return 0;
}