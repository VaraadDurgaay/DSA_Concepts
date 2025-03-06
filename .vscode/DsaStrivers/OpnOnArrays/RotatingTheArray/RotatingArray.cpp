#include <iostream>
#include <vector>
using namespace std;
//Left Rotate the array by Brute FORCE

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    int n = sizeof(arr)/sizeof(arr[0]);

    int temp = arr[0];
    for (int i{1};i<=n-1;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;

    cout<<"Array after rotating left : "<<endl;
    for (auto c:arr){
        cout<<c<<" ";
    }

    return 0;
}