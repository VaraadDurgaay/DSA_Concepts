/*
    in this we have to rearrange the elements in the form of sign (the value
    doesnt matter at all )
*/


#include <bits/stdc++.h>
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);
        int pos{0};
        int neg{1};
        for (int i{0};i<n;i++){
            if (nums[i]<0){
                ans[neg]=nums[i];
                neg +=2;
            }
            else if(nums[i]>0){
                ans[pos]=nums[i];
                pos+=2;
            }
        }
        return ans;
        
    }
};
/*
/   the above soln was if the number of positive and -ve nos was same 
    but what if they are diff 
    i mean the no of +ve > no of -ve 
    OR no of +ve< no of -ve
    so teh code below will help you 
*/
#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<int> alternativenumbers(vector<int> &a){
    vector<int> pos,neg;
    int n = a.size();
    for (int i{0};i<n;i++){
        if(a[i]>0){
            pos.push_back(a[i]);
        }
        if(a[i]<0){
            neg.push_back(a[i]);
        }
    }
    if(pos.size()>neg.size()){
        for (int i{0};i<neg.size();i++){
            a[2*i]=pos[i];
            a[(2*i)+1]=neg[i];
        }
        int index = neg.size()*2;
        for (int i{neg.size()};i<pos.size();i++){
            a[index]=pos[i];

        }

    }
    else (
        //code for neg>pos
        //code for  : neg>pos
    )






}