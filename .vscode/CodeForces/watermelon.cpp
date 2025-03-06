#include <iostream>
#include <vector>
using namespace std;

int main(){
    int num;
    cin>> num;
    if (num%2 == 0  &&  num!=2){
        cout<<"Yes"<<endl;
        return 0 ;
    }
    else{
        //its an odd
        cout<<"No"<<endl;
    }
    return 0;
}