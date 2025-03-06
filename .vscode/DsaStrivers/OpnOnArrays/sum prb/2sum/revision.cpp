//its better to use map for this
// lets assums array{1,2,3,4,5}
#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> twosum(vector<int> &a, int target){
    int n = a.size();
    int element ;
    
    map<int,int>mpp;
    for (int i{0};i<n;i++){
        element = a[i];
        int more = target -element;
        //if the element is 4 so to get 7we need 3
        //checking if 3 is present in the map
        if(mpp.find(more)!=mpp.end()){
            return {mpp[more],i};
        }
        mpp[element]=i;/* 
        //here u may have a question that " why are
         we doing mpp[element]=i instead of mpp[i]=element 
         as i will be the index and at that index element(a[i]) will be stored"
         coz AGE JAKE we have tto do mpp.find(more) AUR YE .find() only works to find the 
         value BUT AGAR HUMNE INDICES STORE KIYA TOH ANS GALAT AYEGA
         ==================NOTE=====================
         !!!!!!THE INDEX(i) PLAYS NO ROLE IN THE ANS 
         JUST ITS IN for LOOP THATS WHY WE ARE JUST STORING IT!!!!
        */
    }   
    return {};
}
int main(){
    vector<int> a{2,7,11,15};
    int target =9;
    vector<int> result= twosum(a,9);
    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No valid pair found!" << endl;
    }
    return 0;
}
//the most optimal soln is by using 2 pointers
/*
    if the sum<k then left++
    if the sum>k then right --

    BY USING THIS LOGIC
*/  
#include <iostream>
#include <vector>
using namespace std;

vector<int> twosum(vector<int> &a,int k){
    int n = a.size();
    int left{0},right{n-1};
    int sum{0};

    while (left<=right){
        sum = a[left]+a[right];
        if (sum==k){
            return {left,right};
        }


        if (sum>k){
            
            right--;
        }
        else if (sum<k ){

            left++;
            
        }
    }
    return {};

}