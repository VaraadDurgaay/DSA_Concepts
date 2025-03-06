//it contains two subtypes 
/*
    1.to find element in a rotated sorted array(UNIQUE ELEMENTS)
    2.to find the element in a rotated sorted array(INCLUDES DUPLICATED)
*/  //{6,7,8,1,2,3,4,5}
//FOR UNIQUE ELEMENTS
/*  AS WE know that the array is always sorted in such cases so 
    STEP 1.identify the sorted array
    STEP 2. check whether the ELEMENT is present in that sorted array
    STEP 3. if YES then reduce the array to that sorted array by decreasing/increasing the high/low
    STEP 4. and then delete the unsorted array
*/
class Solution {
    public:
        int search(vector<int>& arr, int target) {
            //identify the sorted array
            int n = arr.size();
            int low{0},high{n-1};
            while(low<=high){
                int mid=(low+high)/2;
                if (arr[mid] == target) return mid;
                //if the left is sorted
                    //we will check in left if target is pressent
                if(arr[low]<=arr[mid]){
                    if(arr[low]<=target && target<=arr[mid]){
                        //eliminate the right 
                        high = mid-1;
                    }
                    else{
                        //eliminate the left
                        low=mid+1;
                    }
                }
                //if right sorted
                //checking is right is sorted
                if(arr[mid]<=arr[high]){
                    //checking if the number is present
                    if (arr[mid]<=target && target<=arr[high]){
                        //eliminate left
                        low = mid+1;
                    }
                    else{
                        high = mid-1;
                    }
                }
            }
            return -1;
        }
    };