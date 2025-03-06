int lowerBound(vector<int> arr, int n, int x) {
	int low{0},high{n-1};
	int ans = n;//the hypothetical ans
	while (low<=high){
		mid = (low+high)/2;
		if (arr[mid]>=x){
			ans = mid;
			high = mid-1;
		}
		else{
			low = mid+1;
		}

	}
	return ans;
	// Write your code here
}
//for upper bound its only >target
int upperbound(vector<int> &a,int target){
	int n = a.size();
	int low{0},high{n-1};
	int ans{n};//if nothing is found it will return an hypothetical value 
	while (low<=high){
		//defining mid
		int mid=(low+high)/2;
		if(a[mid]>target){
			ans = a[mid];
			high=mid-1;

		}
		else {
			low =mid+1;
		}
	}
	return ans;
}