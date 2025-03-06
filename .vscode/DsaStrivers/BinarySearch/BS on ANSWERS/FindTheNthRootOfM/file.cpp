//SAME AS SQRT OF AN INTEGER
//ALL THE STEPS ARE LITERALLY SAME
/*
    FOR eg:
        N=3 M=27 ans = 3  3*3*3
        N=4 M=69 ans=-1
        N=4 M=64 ans = 4    4*4*4*4
*/
//BRUTE FORCE is to use LINEAR SEARCH
    /*
        for (int i{1}->M){
            if (f(i,N)==M)return i;     //here the f(i,N) if the user defined func to mult (line 3/line 5)
            else if (f(i,N)>M) break;
            }
    */
//OPTIMAL IS TO USE BS 
#include <iostream>
#include <vector>
using namespace std;

long long func(int mid,int n ,int m ){
    long long ans {1};
    for (int i {0};i<n;i++){
        ans = ans *mid;
        //to avoid the overflow case where the mult unwantedly exceeds the M

    }
    if (ans>m)return 2;
    if (ans<m)return 1;
    return 0;
}
int NthRoot(int n ,int m ){
    int low{1},high{m};
    while (low<=high){
        int mid = (low+high)/2;
        int midN=func(mid,m);//as in the array mid will denote whether that number is correct or not
        if (midN==m) return mid;
        else if (midN<m)low =mid+1;
        else if (midN>m)high = mid-1;
    }
    return -1;
}