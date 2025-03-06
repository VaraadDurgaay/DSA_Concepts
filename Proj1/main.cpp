#include <iostream>
using namespace std;

void func(int &count){
    
    cout<<count<<" ";
    count++;
}
int main(){
    int count{0};

    while(count<100){
        func(count);
    }
    return 0;
}