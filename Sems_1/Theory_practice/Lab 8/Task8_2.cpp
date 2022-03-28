#include<iostream>

using namespace std;

int main(){
    const int size=5;
    int array[5]={5,10,15,20,25};
    
    for(int i=(size-1);i>=0;--i){
    cout<<array[i]<<endl;
    }
}