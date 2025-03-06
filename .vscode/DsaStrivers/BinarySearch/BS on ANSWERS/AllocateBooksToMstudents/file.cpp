/*
    FOR THEORY REFER THE BOOK
*/
//BRUTE FORCE USING LINEAR SEARCH
int low=max(arr.begin(),arr.end());
int high{accumulate(arr.begin(),arr.end()};
for (int i{low};i<=high){
    int countstudents=func(arr,pages);
    //the "pages" is the maximum no that a student can be alloted (no of pages)
    //OR "pages" IS THE MAXIMUM NO OF PAGES SOMEONE CAN HOLD
    if (countstudents>=m){
        //m is the no of students given in the question
        return pages;
    }
}
func(vector<int> &a,int pages){
    int students{1},pagesstudent{0};
    //at start there will always be 1 student
    //& the pages at start will be 0
    for (int i{0};i<=n-1;i++){
        if (pagesstudent+a[i]<=pages){
            //if the previous pages(at start which is 0) + a[i] <= pages (which is the max limit)
            //then it can be accepted and pagesstudent can be increassed by +a[i]
            pagesstudent+=a[i];
        }
        else{
            //if the above addition exceeds the pages limit then new student should get there
            //& for that student when the pages is at a[i] will get initialised to 
            students++;
            pagesstudent = a[i];
        }
    }
    return students;

}
//OPTIMAL SOLN BY USING BINARY SEARCH
//we will be using the same "func()" which is defined above
int binarysearch(vector<int> &a,int m){
    //m = no of students
    int low{max(a.begin(),a.end())};
    int high{accumulate(a.begin(),a.end())};
    while(low<=high){
        //FOR THEORY REFER THE BOOK
        int mid=low+(high-low)/2;
        int number_of_students=func(a,mid);
        if (number_of_students>m){
            //ill need to delete the left half
            //REFER BOOK FOR THIS CONCEPT

            low = mid+1;
        }
        else{
            high = mid-1;

        }
    }
    return low;//DUE TO CONCEPT OF OPPOSITE POLARITY
}


