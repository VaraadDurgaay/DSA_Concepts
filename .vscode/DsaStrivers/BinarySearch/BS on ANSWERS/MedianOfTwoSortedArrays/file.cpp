#include <iostream>
#include <vector>
using namespace std;

/*
    In this prb we just have to 1)Merge the given sorted arrays (including the duplicated)
    2)we have to find the median of that array

    NOTE: if the median lies b/w two numbers (return that number)
            else just return the median 

*/
//BRUTE FORCE
        //MERGE USING 2 POINTER APPROACH
        //REFER THE BOOK FOR THE THEORY


//OPTIMAL SOLN (REFER THE BOOK FOR THEORY)
class Solution {
    public:
        double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
            int i = 0, j = 0;
            int n = nums1.size() + nums2.size();
            int idx2 = n / 2;
            int idx1 = idx2 - 1;
            int count = 0;
            int idx1el = 0, idx2el = 0;  // Initialize variables
    
            // Merging Two Sorted Arrays (Two Pointer Approach)
            while (i < nums1.size() && j < nums2.size()) {
                if (nums1[i] < nums2[j]) {
                    if (count == idx1) idx1el = nums1[i];
                    if (count == idx2) idx2el = nums1[i];
                    count++;
                    i++;
                } else {
                    if (count == idx1) idx1el = nums2[j];
                    if (count == idx2) idx2el = nums2[j];
                    count++;
                    j++;
                }
            }
    
            // If `nums1` still has elements left
            while (i < nums1.size()) {
                if (count == idx1) idx1el = nums1[i];
                if (count == idx2) idx2el = nums1[i];
                count++;
                i++;
            }
    
            // If `nums2` still has elements left
            while (j < nums2.size()) {
                if (count == idx1) idx1el = nums2[j];
                if (count == idx2) idx2el = nums2[j];
                count++;
                j++;
            }
    
            // If total size is odd, return middle element
            if (n % 2 == 1) {
                return idx2el;
            }
    
            // Otherwise, return the average of the two middle elements
            return (double)(idx1el + idx2el) / 2.0;
        }
    };
    