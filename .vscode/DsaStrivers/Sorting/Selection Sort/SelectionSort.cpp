#include <iostream>
using namespace std;

void selection( int arr[], int n){

    for (int i{0};i<n-1;i++){
        int mini=i;

        for(int j{i+1};j<n;j++){

            if(arr[j]<arr[mini]){
                mini = j;
            }

        }
        int temp = arr[i];
        arr[i]=arr[mini];
        arr[mini]=temp;
    }
}

int main(){

    int arr[10] {1,3,6,2,4,9,5,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    selection(arr,n);
    
    for(auto c: arr){
        cout<<c<<" ";
    }

    return 0;
}