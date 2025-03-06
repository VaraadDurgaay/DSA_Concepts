// the floor is largest<=x
// the ceiling is smallest>=x;
#include <iostream>
#include <vector>
using namespace std;

int floor (vector<int> &a,int x){
    int n=a.size();
    int low{0},high{n-1};
    int ans;
    while(low<=high){
        int mid=(low+high)/2;
        if (a[mid]<=x){
            ans = a[mid];
            low = mid+1;
        }
        else{
            high=mid-1;
        }
    }
    int ans;
}
int ceiling(vector<int> &a,int x){
    int n = a.size();
    int low{0},high{n-1};
    int ans;
    while(low<=high){
        int mid=(low+high)/2;
        if (a[mid]>=x){
            ans=a[mid];
            high=mid-1;

        }
        else {
            low = mid+1;
        }
    }
    return ans ;
}
int main(){
    vector<int> b{1,2,3,4,5};
    // int result1=floor(b,3);
    // cout<<"floor is: "<<result1<<endl;

    // int result2=ceiling(b,3);
    // cout<<"ceiling is: "<<result2<<endl;
    floor(b,3);
    ceiling(b,3);

    return 0 ;
}