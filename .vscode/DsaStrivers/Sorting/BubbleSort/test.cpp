#include <iostream>
#include <vector>
using namespace std;
void bubblesort( vector<int> &arr, int n){
    //the n is the size of the array
    //as in the bubble sort the last element gets reduced for the 
    //total elements as the last element gets sorted first
    /*
    so what ill do is ill use 2 pointer one from the end and other from start
    i<=n-1 & j{0}
    and use nested for loops
    for the first iteration the range of j willbe from 0->n-1
    for second 0->n-2
    for third 0->n-3
    basically i will give range for the j to operate as the last element 
    gets sorted and we have to exclude the last element

    */
   int didSwap{0};
   for (int i{n-1};i>=1;i++){
    for (int j{0};j<=i;j++){
        if (arr[j]>arr[j+1]){
            swap(j,j+1);
            didSwap = 1;
        }
    }
    if (didSwap == 0){
        cout<<"already sorted"<<endl;
    }
   }
}