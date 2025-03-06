/*
    leader is nothing but the amx value in the array 
    in this wuestion we need to return ans in the descending order or sometimes 
    in the ascending ans
*/
vector<int> superiorElements(vector<int>&a) {
    int maxi=INT_MIN;
    int n = a.size();
    vector<int> ans;
    for (int i{n-1};i>=0;i--){
        if (a[i]>maxi){
            ans.push_back(a[i]);
        }
        maxi = max(maxi,a[i]);
    }
    sort (ans.begin(),ans.end());
    return ans;
    // Write your code here.
}