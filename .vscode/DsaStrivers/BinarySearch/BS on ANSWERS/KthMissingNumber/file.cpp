/*
    REFER THE BOOK FOR THEORY

*/
//THE BRUTE FORCE IS 
for (int i{1};i<=*max_element(a);i++){
    if (a[i]<=k)k++;
    else break;
}
//OPTIMAL SOLN (ANS FOR LEETCODE)
class Solution {
    public:
        int findKthPositive(vector<int>& arr, int k) {
            int n  = arr.size();
            int low{0},high{n-1};
            while (low<=high){
                //def mid
                int mid  = low+(high-low)/2;
                int missing = arr[mid]-(mid+1);
                if (missing<k)low = mid+1;
                else high = mid-1;
    
    
            }
            return low+k;
        }
    };