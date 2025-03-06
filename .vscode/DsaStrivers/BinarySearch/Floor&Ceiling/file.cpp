//the floor = largest no in array <= the x
//the ceiling = smallest no in array >= the x
// ** PSEUDO-CODE FOR FLOOR OF AN ARRAY
floor (vector<int> &arr, int x){
    //x in the target 
    int n = arr.size();
    int low{0},high{n-1};
    int ans=-1;
    while (low<=high){
        int mid;
        mid = (low+high)/2;
        if (arr[mid]<=x){
            /* Over here the Array is already sorted cause bsd wont work on unsorted array
                we dont need to do the max(ans,...) cause we are eliminating the smaller numbers 
                in the array by doing low= mid+1;
                as the array is alrady sorted do eliminating whatever is at the left of the mid
                by-default eliminates the smaller number
            */
            ans = arr[mid];
            low = mid+1;
        }
    }
}
//the ceiling = smallest no >=x;
// PSEUDO-CODE OF CEILING
ceiling(vector<int> &arr,int x){
    int n = arr.size();
    int low{0},high{n-1};
    int ans= INT_MAX;
    while(low<=high){
        int mid ;
        mid= (low+high)/2;
        //now comparing the numbers
        if (arr[mid]>=x){
            //it can PROBABILY be the ans
            ans = arr[mid];
            //moving the high pointer
            high = mid-1;
            /*  over here we dont need to do min(ans,...) because the array is already sorted in 
                case of bsd on an array 
                and if the numbers are greater than the x we directly eliminate with high = mid-1
                ie to the RIGHT of Mid(all greater) we are eliminating as we WANT the Smallest 
                num WHICH IS GREATER / = the x
            */
        }
    }
}