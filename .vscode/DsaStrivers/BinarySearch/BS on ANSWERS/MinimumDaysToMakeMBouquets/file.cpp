//FOR THE BRUTE FORCE REFER THE BOOK 
bool possible(vector<int> &a,day,m,k){
    //m=no of bouquet n= no of flowers in an bouquet
    int count {0},bouq{0};
    for (int i{0};i<a.size();i++){
        if (a[i]<=day)count++;
        else{
            bouq+=count/k;
            count=0;
        }
    }
    bouq+=count/k;
    if (bouq>=m)return true;
    else return false;
}
int main(){
    for (int i{mini of array} i<=(max of array);i++){
        if (possible(arr,i,m,k))return i;
    }
    return 0;
}
//Explanation of brute force 
/*
    -We will first initialise a count pointer & iterate through the array
    -if the a[i]<=day then  we will increase the count and go on increasing until a[i]>day
    -when a[i]<day appears firstly we will find the number of bouquests by count/m {m = no o flowers}
     we'll do bouquet+=count/m;
    -ALSO if (a.size()<m*k) ie if the no of flowers are less to make the bouquet then RETURN FALSE
    -this above all will be inside a for loop
    -after the for loop exits then we will again check for count by 
     bouquets+= count/m;
    -After all this we will bw having the value of the NO OF BOUQUETS CAN BE FORMED IN THAT DAY
    -Then at the end we will just check whether the no of Bouquets>=m
     if YES then return TRUE
     if NO then return NO 
    AND AT END return -1 at the last IF you dont get the answer
*/

//OPTIMAL SOLN 
/*
    ==========APPROACH===============
    -FOR THE array [7 7 7 7 13 11 12 7] the RANGE will be from 7->13 
    -STEP 1)    l=7, h=13 mid=10 ,
                at 10 its not possible SO WE NEED TO INCREASE THE DAY 
                THEREFORE low = mid+1;
*/
//We will be using the above func also 
int binarysearch(vector<int> &a,m,k){
    int n = a.size();
    int low {minimin(a)},high(maximum(a));
    while(low<=high){
        //def mid
        int mid = (low+high)/2;
        //if the ans is possible
        if (possible(a,mid,m,k)== true){
            ans = mid;
            //we need to find the minimum number of the k 
            high =mid -1 ;
        }
        else{
            low = mid+1;
        }
    }
}
//ANSWER FOR THE LEETCODE
class Solution {
    public:
        int mini(vector<int>& a) {
            int n = a.size();
            int minim{INT_MAX};
            for (int i{0}; i < n; i++) {
                if (a[i] < minim) {
                    minim = a[i];
                }
            }
            return minim;
        }
        int maxi(vector<int>& a) {
            int n = a.size();
            int maxim{INT_MIN};
            for (int i{0}; i < n; i++) {
                if (a[i] > maxim) {
                    maxim = a[i];
                }
            }
            return maxim;
        }
        bool possible(vector<int>& a, int day, int m, int k) {
            // m=no of bouq n=no of flowers in bouq
            // if the no of flowers is less
            if (a.size() < m * k)return false;
    
            int count{0},bouquets{0};
            for (int i{0}; i < a.size(); i++) {
                
                if (a[i] <= day) {
                    count += 1;
                } else {
                    // first count the no of b
                    bouquets += count / k;
                    // then set the count = 0
                    count = 0;
                }
            }
            // again check for bouw
            bouquets += count / k;
            if (bouquets >= m)
                return true;
            else
                return false;
        }
        int minDays(vector<int>& bloomDay, int m, int k) {
            int n = bloomDay.size();
            int ans{INT_MAX};
            int low{mini(bloomDay)}, high{maxi(bloomDay)};
            while (low <= high) {
                // def mid
                int mid = (low + high) / 2;
                // checking the conditions
                if (possible(bloomDay, mid, m, k) == true) {
                    // you can be my probable ans
                    ans = mid;
                    // as we need to find the minimum ans
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            return ans;
        }
    };