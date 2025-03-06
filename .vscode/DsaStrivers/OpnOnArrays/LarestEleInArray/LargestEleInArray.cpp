#include <iostream>
using namespace std;

int main (){
    int arr [10]{1,3,2,5,4,6,5,7,6,8};
    int max = arr[0];
    for (int i{0};i<10;i++){
        
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<"largest is: "<<max <<endl;
//Now lets find second largest in an array 
    int secondl = -1;
    for (int i{0};i<10;i++){
        if(arr[i]>secondl && arr[i]<max){
            secondl = arr[i];
        }
    }
    cout<<"second largest is: "<<secondl;
    return 0;
}