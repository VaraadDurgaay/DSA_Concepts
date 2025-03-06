/*
    we just need to find the real part of any sq root of a number
    eg : sqrt(4) = 2, sqrt(9) = 3, sqrt(16) =4,sqrt(24)=4{its actually 4.78 we only ew need is 4}
*/
//BRUTE FORCE 
#include <iostream>
#include <cmath>
using namespace  std;

int main(){
    int j{28};
    int ans;
    for (int i{0};i<j;i++){
        if (i*i<=j){
            //if the square is smaller than j then store its value
            ans = i;
        }
        else {
            //if the mult exceeds j then the loop will break and "ans " 
            //will hold the value o;f the number
            break;
        }
    }
    return 0;
}
//optimal soln is to use BINARY SEARCH
/*
    lets say n =28 & low =1 , high = 28
    STEP 1) mid = 14, and 14*14 !<= 28 so we can say that the ans is in the LEFT HALF
            THEREFORE, Eliminate the right mid->high by high = mid -1;
    
    STEP 2) low = 1, high = 13 & mid = 7
            ALSO 7*7 !<= 28 so we can say that the ans is in the LEFT HALF
            THEREFORE, Eliminate the right mid->high by high = mid -1;
    
    STEP 3) low= 1, high = 6 & mid = 3
            NOW 3*3 <=28 THEREFORE THIS MIGHT BE THE ANS 
            Now , we need to find more bigger NUMBER therfore WE WILL MOVE right 
            as the array is already sorted in case of binary search
    
    STEP 4) low = 4, high = 6 & mid = 5
            5*5 <= 28 THEREFORE WE WILL MOVE RIGHT
            we will store ans = 5

    STEP 5) low =6 , high = 6 & mid = 6
            BUT 6*6 !<= 28 THEREFORE WE WILL STOP AT LAST!!!!
*/ 
#include <iostream>
#include <vector>
using namespace std;

int sqrt(int x ){
    int low = 1;
    int high = x;
    int ans=-1;
    while (low<=high){

        //def mid 
        int mid = (low +high)/2;
        //check if mid is the ans
        if (mid *mid <=x){
            //it can probably be the ans 
            ans = mid;
            //further moving further to find the bigger number
            low = mid+1;
        }
        else {
            //the ans lies to the left of mid is mid*mid !<= x
            high =mid -1;
        }
    }
    return ans;
}