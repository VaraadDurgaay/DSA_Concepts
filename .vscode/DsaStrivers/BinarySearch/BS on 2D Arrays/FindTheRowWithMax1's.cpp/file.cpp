//this is also a easy question 
//REFER THE BOOK FOR THEORY 
/*
    WE are given a matrix of 0&1 and we have to find the row with max 1's;
    n = no of rows;
    m = no of columns;

*/
//BRUTE FORCE 
//using 2 for loops for n and m REFER THE BOOK 

//OPTIMAL SOLN 
//TO use BS for each rows {here we cannot optimise for the 1st for loop of n(traversing the rows)}
//codingNinja Soln
int lowerbound(vector<int> arr,int n,int x){
    
    int low(0),high{n-1};
    int ans =n;
    while(low<=high){
        //def mid
        int mid = low +(high-low)/2;
        if (arr[mid]>=x){
            ans = mid;
            //we need to find more smaller
            high = mid-1;

        }
        else{
            low = mid+1;
        }
    }
    return ans;
}


int rowWithMax1s(vector<vector<int>> &matrix, int n, int m) {
    
    int maxi{-1};
    int flag{0};
    int index{-1};
    for (int i{0};i<n;i++){
        int count_1s = m- lowerbound(matrix[i],m,1);
        if (count_1s>0)flag++;
        if (count_1s>maxi){
            maxi = count_1s;
            index = i;
        }

    }
    if (flag <=0)return -1;
    return index;
    
}