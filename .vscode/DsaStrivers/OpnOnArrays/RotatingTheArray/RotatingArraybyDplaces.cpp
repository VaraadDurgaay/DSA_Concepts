#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 2;
    int temp[d];
    //storing the values which need to be shifted into the temp
    for (int i{0};i<d;i++){
        temp[i]=arr[i];
    }
    //shifting the remaining elements to the left by n-d places
    for (int i{d};i<n;i++){
        arr[i-d]=arr[i];
    }
    //now there is empty space in the main arr for the shifted elements
    //so we will fill the empty spaces with the temp array
    for (int i{0};i<d;i++){
        arr[(n-d)+i]=temp[i];
    }
    for (auto c:arr){
        cout<<c<<" ";
    }
    cout<<endl;


    return 0;
}