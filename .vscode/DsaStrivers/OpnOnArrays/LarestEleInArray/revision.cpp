//finding the largest and 2nd largest number in an array
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> a{1,2,3,4,5,6,7};
    //the largest and 2nd largest
    int largest{-1};
    int slargest{-1};
    int n = a.size();
    for (int i {0};i<n;i++){
        if (a[i]>largest){
            //first setting the slargest
            slargest=largest;
            largest=a[i];
        }
        else if(a[i]<largest && a[i]>slargest){
            //only changing the slargest
            slargest=a[i];
        }
    }

    return 0;
}